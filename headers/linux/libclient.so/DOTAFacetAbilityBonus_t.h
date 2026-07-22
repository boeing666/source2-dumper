#pragma once

struct DOTAFacetAbilityBonus_t  // sizeof 0x40, align 0xFF (client)
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< float32 > m_vecValues; // offset 0x8, size 0x18, align 8
    EDOTASpecialBonusOperation m_eOperation; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
    int32 m_nSpecialBonusesCount; // offset 0x24, size 0x4, align 4
    DOTASpecialAbilityBonus_t* m_pSpecialBonuses; // offset 0x28, size 0x8, align 8
    DOTALevelingAbilityBonus_t* m_pScepterBonus; // offset 0x30, size 0x8, align 8
    DOTALevelingAbilityBonus_t* m_pShardBonus; // offset 0x38, size 0x8, align 8
};
