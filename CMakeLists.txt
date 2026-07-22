cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

if(POLICY CMP0092)
	cmake_policy(SET CMP0092 NEW) # Don't add /W3 warning level by default.
endif()

project(source2_dumper
	VERSION 1.0.0
	DESCRIPTION "Source 2 dumper"
	LANGUAGES C CXX
)

set(SOURCESDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/sourcesdk" CACHE PATH "Path to Wend4r/sourcesdk")
set(DYNLIBUTILS_DIR "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/cpp-dynlibutils" CACHE PATH "Path to Wend4r/cpp-dynlibutils")

if(NOT EXISTS "${SOURCESDK_DIR}/CMakeLists.txt")
	message(FATAL_ERROR "sourcesdk not found at '${SOURCESDK_DIR}'. Pass -DSOURCESDK_DIR=<path> or clone https://github.com/Wend4r/sourcesdk into thirdparty/sourcesdk")
endif()

if(NOT EXISTS "${DYNLIBUTILS_DIR}/CMakeLists.txt")
	message(FATAL_ERROR "cpp-dynlibutils not found at '${DYNLIBUTILS_DIR}'. Pass -DDYNLIBUTILS_DIR=<path> or clone https://github.com/Wend4r/cpp-dynlibutils into thirdparty/cpp-dynlibutils")
endif()

set(SOURCESDK_LINK_STEAMWORKS OFF CACHE BOOL "" FORCE)
set(SOURCESDK_COMPILE_PROTOBUF OFF CACHE BOOL "" FORCE)

set(GAME "cs2" CACHE STRING "Target game: cs2 | dota2 | deadlock")
set_property(CACHE GAME PROPERTY STRINGS cs2 dota2 deadlock)

if(GAME STREQUAL "cs2")
	set(SE_GAME_DIR "csgo")
	set(GAME_APPID 730)
	set(_sdk_target "cs2")
elseif(GAME STREQUAL "dota2")
	set(SE_GAME_DIR "dota")
	set(GAME_APPID 570)
	set(_sdk_target "dota2")
elseif(GAME STREQUAL "deadlock")
	set(SE_GAME_DIR "citadel")
	set(GAME_APPID 1422450)
	set(_sdk_target "deadlock")
else()
	message(FATAL_ERROR "Unknown GAME '${GAME}' — use cs2 | dota2 | deadlock")
endif()

set(SOURCESDK_GAME_TARGET "${_sdk_target}" CACHE STRING "" FORCE)

add_subdirectory("${SOURCESDK_DIR}" "${CMAKE_BINARY_DIR}/sourcesdk")
add_subdirectory("${DYNLIBUTILS_DIR}" "${CMAKE_BINARY_DIR}/dynlibutils")

set(GAME_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/game/${GAME}/game" CACHE PATH "Downloaded game tree root (contains bin/ and <game>/)")

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
	src/core/game_module.cpp
	src/schema/schema_parse.cpp
	src/schema/schema_util.cpp
	src/output/header_writer.cpp
	src/output/json_writer.cpp
	src/runtime/appsystem.cpp
	src/runtime/convars.cpp
	src/runtime/network_fields.cpp
	src/gameevents/gameevents.cpp
)

list(APPEND COMPILE_DEFINES
	MODULE_PREFIX="${CMAKE_SHARED_LIBRARY_PREFIX}"
	MODULE_EXT="${CMAKE_SHARED_LIBRARY_SUFFIX}"
	GAME_ROOT="${GAME_ROOT}"
	SE_GAME_DIR="${SE_GAME_DIR}"
	SE_BIN_DIR="${SE_BIN_DIR}"
	PLATFORM_NAME="${PLATFORM_NAME}"
	GAME_NAME="${GAME}"
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_compile_definitions(${PROJECT_NAME} PRIVATE ${COMPILE_DEFINES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	CXX_STANDARD 23      # glaze (JSON) requires C++23
	CXX_STANDARD_REQUIRED ON
	CXX_EXTENSIONS OFF
)

if(MSVC)
	set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

	target_link_libraries(${PROJECT_NAME} PRIVATE "${SOURCESDK_DIR}/lib/${SE_BIN_DIR}/tier0.lib")
	target_link_options(${PROJECT_NAME} PRIVATE /DELAYLOAD:tier0.dll)
	target_link_libraries(${PROJECT_NAME} PRIVATE delayimp)
else()
	target_link_libraries(${PROJECT_NAME} PRIVATE "${GAME_ROOT}/bin/${SE_BIN_DIR}/libtier0.so")
	set_source_files_properties(src/runtime/appsystem.cpp PROPERTIES COMPILE_OPTIONS "-fno-rtti")
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE
	common
	cpp-memory_utils
)

target_include_directories(${PROJECT_NAME} PRIVATE
	"${CMAKE_CURRENT_SOURCE_DIR}/src"
	"${SOURCESDK_DIR}/public/mathlib"
	"${SOURCESDK_DIR}/thirdparty/protobuf/src"
	"${CMAKE_BINARY_DIR}/sourcesdk/protos"
	"${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/glaze/include"
)
