#pragma once

class CAI_CitadelNPC : public CAI_BaseNPC /*0x0*/  // sizeof 0x17B0, align 0xFF [vtable abstract] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11C8]; // offset 0x0
    Vector m_vLastGroundEntityCheckPos; // offset 0x11C8, size 0xC, align 4 | MNotSaved
    GameTime_t m_flLastGroundCheckTime; // offset 0x11D4, size 0x4, align 255 | MNotSaved
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x11D8, size 0x268, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0x1440, size 0x160, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x15A0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_15C0[0x8]; // offset 0x15C0
    int32 m_iBaseGoldReward; // offset 0x15C8, size 0x4, align 4
    int32 m_iSkillShotReward; // offset 0x15CC, size 0x4, align 4
    char _pad_15D0[0x2C]; // offset 0x15D0
    CHandle< CCitadelBaseAbility > m_hAbilityOwner; // offset 0x15FC, size 0x4, align 4
    char _pad_1600[0x60]; // offset 0x1600
    CUtlVectorEmbeddedNetworkVar< WeakPoint_t > m_vecWeakPoints; // offset 0x1660, size 0x68, align 8 | MNetworkEnable MNotSaved
    bool m_bMinion; // offset 0x16C8, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_16C9[0x3]; // offset 0x16C9
    CHandle< CBaseEntity > m_hLookTarget; // offset 0x16CC, size 0x4, align 4 | MNetworkEnable MNotSaved
    int32 m_iCoverGroupID; // offset 0x16D0, size 0x4, align 4
    char _pad_16D4[0x60]; // offset 0x16D4
    VectorWS m_vecSpawnOrigin; // offset 0x1734, size 0xC, align 4
    char _pad_1740[0x24]; // offset 0x1740
    bool m_bBeamActive; // offset 0x1764, size 0x1, align 1 | MNetworkEnable
    char _pad_1765[0x3]; // offset 0x1765
    VectorWS m_vEyeBeamTarget; // offset 0x1768, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    char _pad_1774[0x3C]; // offset 0x1774
};
