#pragma once

struct DOTALevelingAbilityBonus_t  // sizeof 0x28, align 0xFF (client)
{
    char* m_pszName; // offset 0x0, size 0x8, align 8
    CUtlVector< float32 > m_vecValues; // offset 0x8, size 0x18, align 8
    EDOTASpecialBonusOperation m_eOperation; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    uint32 m_nAghanimID; // offset 0x24, size 0x4, align 4
};
