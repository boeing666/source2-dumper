cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

if(POLICY CMP0092)
	cmake_policy(SET CMP0092 NEW) # Don't add /W3 warning level by default.
endif()

project(source2_dumper
	VERSION 1.0.0
	DESCRIPTION "Source 2 dumper"
	LANGUAGES C CXX
)

# Paths to SDKs, overridable at configure time:
#   cmake -B build -DSOURCESDK_DIR=D:/path/to/sourcesdk -DDYNLIBUTILS_DIR=D:/path/to/cpp-dynlibutils
set(SOURCESDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/sourcesdk" CACHE PATH "Path to Wend4r/sourcesdk")
set(DYNLIBUTILS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/cpp-dynlibutils" CACHE PATH "Path to Wend4r/cpp-dynlibutils")

if(NOT EXISTS "${SOURCESDK_DIR}/CMakeLists.txt")
	message(FATAL_ERROR "sourcesdk not found at '${SOURCESDK_DIR}'. Pass -DSOURCESDK_DIR=<path> or clone https://github.com/Wend4r/sourcesdk into thirdparty/sourcesdk")
endif()

if(NOT EXISTS "${DYNLIBUTILS_DIR}/CMakeLists.txt")
	message(FATAL_ERROR "cpp-dynlibutils not found at '${DYNLIBUTILS_DIR}'. Pass -DDYNLIBUTILS_DIR=<path> or clone https://github.com/Wend4r/cpp-dynlibutils into thirdparty/cpp-dynlibutils")
endif()

# We don't link Steam; sourcesdk still needs protobuf (its networksystem/engine
# sources include generated .pb.h), so that stays on and is cached in CI instead.
set(SOURCESDK_LINK_STEAMWORKS OFF CACHE BOOL "" FORCE)
set(SOURCESDK_COMPILE_PROTOBUF OFF CACHE BOOL "" FORCE)

add_subdirectory("${SOURCESDK_DIR}" "${CMAKE_BINARY_DIR}/sourcesdk")
add_subdirectory("${DYNLIBUTILS_DIR}" "${CMAKE_BINARY_DIR}/dynlibutils")

set(SE_GAME_DIR "csgo" CACHE STRING "Game directory name (game/<dir>)")

# Root of the downloaded game tree (the dir holding bin/ and <game>/), produced by
# scripts/download-depots.*. Baked into the binary so the dumper always reads the
# latest downloaded modules. Override with -DGAME_ROOT=... to point elsewhere.
set(GAME_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/game/game" CACHE PATH "Downloaded game tree root (contains bin/ and <game>/)")

# Platform-specific binary subdirectory inside the game tree + short platform name
# used to namespace the generated site data (data/<PLATFORM_NAME>/...).
if(WIN32)
	set(SE_BIN_DIR "win64")
	set(PLATFORM_NAME "win64")
else()
	set(SE_BIN_DIR "linuxsteamrt64")
	set(PLATFORM_NAME "linux")
endif()

set(SOURCE_FILES
	src/main.cpp
	src/schema_dumper.cpp
	src/schema_util.cpp
	src/header_writer.cpp
	src/html_writer.cpp
)

list(APPEND COMPILE_DEFINES
	MODULE_PREFIX="${CMAKE_SHARED_LIBRARY_PREFIX}"
	MODULE_EXT="${CMAKE_SHARED_LIBRARY_SUFFIX}"
	GAME_ROOT="${GAME_ROOT}"
	SE_GAME_DIR="${SE_GAME_DIR}"
	SE_BIN_DIR="${SE_BIN_DIR}"
	PLATFORM_NAME="${PLATFORM_NAME}"
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_compile_definitions(${PROJECT_NAME} PRIVATE ${COMPILE_DEFINES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
)

if(MSVC)
	# Both SDKs are built with the static runtime — match it to avoid LNK4098.
	set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

	# The exe statically imports tier0.dll via sourcesdk, forcing it at process
	# startup (it lives in game/bin/<platform>, not next to the exe). Delay-load it:
	# dynlibutils loads tier0 from the game tree at runtime before any real call,
	# and the delay stub then binds to the already-loaded module by name.
	target_link_options(${PROJECT_NAME} PRIVATE /DELAYLOAD:tier0.dll)
	target_link_libraries(${PROJECT_NAME} PRIVATE delayimp)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE
	common
	cpp-memory_utils
)
