#pragma once

struct CPulseCell_ApplyAnimGraphParam::CursorState_t  // sizeof 0x18, align 0x8 (server) {MGetKV3ClassDefaults}
{
    CHandle< CBaseEntity > hEntity; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlString sParamName; // offset 0x8, size 0x8, align 8
    bool bApplyToExternalGraphs; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x7]; // offset 0x11
};
