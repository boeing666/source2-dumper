#pragma once

class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1368, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xFA0]; // offset 0x0
    int32 m_iTargetPosIndex; // offset 0xFA0, size 0x4, align 4
    bool m_bShadowFormCast; // offset 0xFA4, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0FA5[0x3]; // offset 0xFA5
    Vector m_vYamatoCastPos; // offset 0xFA8, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    Vector m_vTargetCastPos; // offset 0xFB4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder
    GameTime_t m_flFlyingToTargetStartTime; // offset 0xFC0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flEndAttackTime; // offset 0xFC4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flGrappleStartTime; // offset 0xFC8, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flGrappleArriveTime; // offset 0xFCC, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_flAttackLatchTime; // offset 0xFD0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    Vector m_vAttackLatchPos; // offset 0xFD4, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    CHandle< CBaseEntity > m_hTarget; // offset 0xFE0, size 0x4, align 4 | MNetworkEnable
    bool m_bIsTargetAlly; // offset 0xFE4, size 0x1, align 1 | MNetworkEnable
    char _pad_0FE5[0x3]; // offset 0xFE5
    GameTime_t m_flGrappleShotAttackTime; // offset 0xFE8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0xFEC, size 0x4, align 4
    Vector[20] m_rgPath; // offset 0xFF0, size 0xF0, align 4 | MNetworkEnable MNetworkUserGroup MNetworkEncoder MNetworkChangeCallback
    int32 m_nPathIdx; // offset 0x10E0, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_nPathSize; // offset 0x10E4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    float32 m_flPathLength; // offset 0x10E8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vFlyingInitialOffsetToPath; // offset 0x10EC, size 0xC, align 4 | MNetworkEnable MNetworkUserGroup
    float32 flDistFlown; // offset 0x10F8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    Vector m_vLastSafePos; // offset 0x10FC, size 0xC, align 4
    char _pad_1108[0x200]; // offset 0x1108
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1308, size 0x4, align 255
    char _pad_130C[0x54]; // offset 0x130C
    bool m_bPathDirty; // offset 0x1360, size 0x1, align 1
    char _pad_1361[0x7]; // offset 0x1361
};
