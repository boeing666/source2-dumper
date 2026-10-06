#pragma once

struct DynamicAbilityValues_t  // sizeof 0x58, align 0xFF [vtable] (server)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_SourceAbilityID; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CNetworkUtlVectorBase< CUtlStringToken > m_vecImbuedAbilities; // offset 0x38, size 0x18, align 8
    EModifierValue m_eValType; // offset 0x50, size 0x2, align 2
    char _pad_0052[0x2]; // offset 0x52
    float32 m_flValue; // offset 0x54, size 0x4, align 4
};
