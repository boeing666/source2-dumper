#pragma once

struct ItemPopularityEntry_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    float32 m_flPickPct; // offset 0x0, size 0x4, align 4
    float32 m_flWinratePct; // offset 0x4, size 0x4, align 4
    CUtlString m_sSourceLocString; // offset 0x8, size 0x8, align 8
    CUtlStringToken m_unImbuedAbilityID; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
