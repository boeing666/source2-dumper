#pragma once

class CCitadel_Ability_Magician_CopyUlt : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x14E8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x13D8]; // offset 0x0
    bool m_bHasUsedCopiedUlt; // offset 0x13D8, size 0x1, align 1 | MNetworkEnable
    bool m_bHasCopiedUlt; // offset 0x13D9, size 0x1, align 1 | MNetworkEnable
    bool m_bIsModelSwapped; // offset 0x13DA, size 0x1, align 1 | MNetworkEnable
    char _pad_13DB[0x1]; // offset 0x13DB
    GameTime_t m_timeSwappedModel; // offset 0x13DC, size 0x4, align 255 | MNetworkEnable
    CHandle< C_CitadelBaseAbility > m_pActiveCopyUltimateAbility; // offset 0x13E0, size 0x4, align 4 | MNetworkEnable
    HeroID_t m_nCopiedHeroID; // offset 0x13E4, size 0x4, align 255 | MNetworkEnable
    CUtlVector< LingeringCopiedAbility_t > m_vecLingeringCopiedAbilities; // offset 0x13E8, size 0x18, align 8
    ModelChange_t m_ModelChange; // offset 0x1400, size 0xE8, align 8
};
