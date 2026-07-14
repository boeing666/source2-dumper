#include <filesystem>

#include "schema_dumper.hpp"

namespace fs = std::filesystem;

int main(int argc, char* argv[])
{
	const fs::path gameRoot  = GAME_ROOT;
	const fs::path binDir    = gameRoot / "bin" / SE_BIN_DIR;
	const fs::path moduleDir = gameRoot / SE_GAME_DIR / "bin" / SE_BIN_DIR;

	const fs::path outDir = (argc > 1) ? fs::path(argv[1]) : fs::path("sdk");

	return schema::DumpAll(binDir, moduleDir, outDir);
}
