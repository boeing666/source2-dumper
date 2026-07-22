#pragma once

class CMonsterHunterTradeRecipeDefinition  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    EMonsterHunterMaterialTradeConversion m_eTradeConversion; // offset 0x0, size 0x4, align 4
    int32 m_nOfferCount; // offset 0x4, size 0x4, align 4
    int32 m_nResultCount; // offset 0x8, size 0x4, align 4
    bool m_bOfferTokensMustBeTheSame; // offset 0xC, size 0x1, align 1
    bool m_bCanChooseResult; // offset 0xD, size 0x1, align 1
    char _pad_000E[0x2]; // offset 0xE
    CUtlString m_strLocTitle; // offset 0x10, size 0x8, align 8
    CUtlString m_strDescription; // offset 0x18, size 0x8, align 8
    uint32 m_unUnlockPrerequisiteActionID; // offset 0x20, size 0x4, align 4
    uint32 m_unResultActionID; // offset 0x24, size 0x4, align 4
    EMonsterHunterMaterialRarity m_eRequiredOfferRarity; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
