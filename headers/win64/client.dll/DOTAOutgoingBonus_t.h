#pragma once

struct DOTAOutgoingBonus_t  // sizeof 0x20, align 0xFF [trivial_dtor] (client)
{
    char* m_pszAbilityName; // offset 0x0, size 0x8, align 8
    char* m_pszSpecialName; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x4]; // offset 0x10
    float32 m_fValue; // offset 0x14, size 0x4, align 4
    EDOTASpecialBonusOperation m_eOperation; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x7]; // offset 0x19
};
