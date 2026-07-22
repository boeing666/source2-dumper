#pragma once

class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x15D0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1208]; // offset 0x0
    SatVolumeIndex_t m_desatVolIdx; // offset 0x1208, size 0x4, align 255
    bool m_bShadowFormCast; // offset 0x120C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_120D[0x3]; // offset 0x120D
    Vector m_vYamatoCastPos; // offset 0x1210, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    Vector m_vTargetCastPos; // offset 0x121C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    GameTime_t m_flFlyingToTargetStartTime; // offset 0x1228, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flEndAttackTime; // offset 0x122C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flGrappleStartTime; // offset 0x1230, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGrappleArriveTime; // offset 0x1234, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flAttackLatchTime; // offset 0x1238, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vAttackLatchPos; // offset 0x123C, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1248, size 0x4, align 4 | MNetworkEnable
    bool m_bIsTargetAlly; // offset 0x124C, size 0x1, align 1 | MNetworkEnable
    char _pad_124D[0x3]; // offset 0x124D
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1250, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    char _pad_1254[0x4]; // offset 0x1254
    Vector[20] m_rgPath; // offset 0x1258, size 0xF0, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder MNetworkChangeCallback
    int32 m_nPathIdx; // offset 0x1348, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nPathSize; // offset 0x134C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flPathLength; // offset 0x1350, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vFlyingInitialOffsetToPath; // offset 0x1354, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 flDistFlown; // offset 0x1360, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vLastSafePos; // offset 0x1364, size 0xC, align 4
    char _pad_1370[0x200]; // offset 0x1370
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1570, size 0x4, align 255
    char _pad_1574[0x54]; // offset 0x1574
    bool m_bPathDirty; // offset 0x15C8, size 0x1, align 1
    char _pad_15C9[0x7]; // offset 0x15C9
};
