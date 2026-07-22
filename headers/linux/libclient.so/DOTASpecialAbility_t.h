#pragma once

struct DOTASpecialAbility_t  // sizeof 0x118, align 0xFF (client)
{
    char* m_pszName; // offset 0x0, size 0x8, align 8
    char* m_pszValue; // offset 0x8, size 0x8, align 8
    char* m_pszLevelKey; // offset 0x10, size 0x8, align 8
    int32 m_nCount; // offset 0x18, size 0x4, align 4
    float32[11] m_Values; // offset 0x1C, size 0x2C, align 4
    uint8 m_eDisplayType; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
    int32 m_nBonusesCount; // offset 0x4C, size 0x4, align 4
    DOTASpecialAbilityBonus_t[1] m_Bonuses; // offset 0x50, size 0x10, align 8
    DOTASpecialAbilityBonus_t m_PerLevelUpBonus; // offset 0x60, size 0x10, align 255
    DOTALevelingAbilityBonus_t m_ScepterBonus; // offset 0x70, size 0x28, align 255
    DOTALevelingAbilityBonus_t m_ShardBonus; // offset 0x98, size 0x28, align 255
    DOTAFacetAbilityBonus_t m_FacetBonus; // offset 0xC0, size 0x40, align 255
    CUtlStringToken m_strRequiredFacet; // offset 0x100, size 0x4, align 4
    DAMAGE_TYPES m_nDamageTypeField; // offset 0x104, size 0x4, align 4
    uint8 m_unLevelUpInterval; // offset 0x108, size 0x1, align 1
    uint8 m_unLevelUpBonusRequiredLevel; // offset 0x109, size 0x1, align 1
    bool m_bSpellDamageField; // offset 0x10A, size 0x1, align 1
    bool m_bRequiresScepterField; // offset 0x10B, size 0x1, align 1
    bool m_bRequiresShardField; // offset 0x10C, size 0x1, align 1
    bool m_bAffectedByAoEIncrease; // offset 0x10D, size 0x1, align 1
    bool m_bDynamicValue; // offset 0x10E, size 0x1, align 1
    bool m_bAffectedByCurio; // offset 0x10F, size 0x1, align 1
    bool m_bShowAbsoluteValues; // offset 0x110, size 0x1, align 1
    char _pad_0111[0x7]; // offset 0x111
};
