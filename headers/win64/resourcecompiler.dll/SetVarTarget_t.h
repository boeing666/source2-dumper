#pragma once

struct SetVarTarget_t  // sizeof 0x10, align 0x8 (pulsedoc_lib) {MGetKV3ClassDefaults}
{
    PulseDocNodeID_t nVarDefID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0x4]; // offset 0x4
    CUtlString strValueEncoded; // offset 0x8, size 0x8, align 8
};
