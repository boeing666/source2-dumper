#pragma once

class CCitadel_Ability_Magician_CopyUlt : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1298, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1170]; // offset 0x0
    bool m_bHasUsedCopiedUlt; // offset 0x1170, size 0x1, align 1 | MNetworkEnable
    bool m_bHasCopiedUlt; // offset 0x1171, size 0x1, align 1 | MNetworkEnable
    bool m_bIsModelSwapped; // offset 0x1172, size 0x1, align 1 | MNetworkEnable
    char _pad_1173[0x1]; // offset 0x1173
    GameTime_t m_timeSwappedModel; // offset 0x1174, size 0x4, align 255 | MNetworkEnable
    CHandle< CCitadelBaseAbility > m_pActiveCopyUltimateAbility; // offset 0x1178, size 0x4, align 4 | MNetworkEnable
    HeroID_t m_nCopiedHeroID; // offset 0x117C, size 0x4, align 255 | MNetworkEnable
    CUtlVector< LingeringCopiedAbility_t > m_vecLingeringCopiedAbilities; // offset 0x1180, size 0x18, align 8
    ModelChange_t m_ModelChange; // offset 0x1198, size 0xE8, align 8
    char _pad_1280[0x18]; // offset 0x1280
};
