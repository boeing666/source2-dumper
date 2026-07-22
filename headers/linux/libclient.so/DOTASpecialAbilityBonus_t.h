#pragma once

struct DOTASpecialAbilityBonus_t  // sizeof 0x10, align 0xFF (client)
{
    char* m_pszName; // offset 0x0, size 0x8, align 8
    float32 m_fValue; // offset 0x8, size 0x4, align 4
    EDOTASpecialBonusOperation m_eOperation; // offset 0xC, size 0x1, align 1
    char _pad_000D[0x3]; // offset 0xD
};
