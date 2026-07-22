#pragma once

struct CTestPulseIO::FloatStringArgs_t  // sizeof 0x10, align 0x8 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    float32 flOutFloat; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlSymbolLarge strOutString; // offset 0x8, size 0x8, align 8
};
