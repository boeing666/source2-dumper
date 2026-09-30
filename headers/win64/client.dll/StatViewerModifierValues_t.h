#pragma once

struct StatViewerModifierValues_t  // sizeof 0x40, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    CUtlStringToken m_SourceModifierID; // offset 0x30, size 0x4, align 4
    CUtlStringToken m_SourceAbilityID; // offset 0x34, size 0x4, align 4
    EModifierValue m_eValType; // offset 0x38, size 0x4, align 4
    float32 m_flValue; // offset 0x3C, size 0x4, align 4
};
