#pragma once

class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14D0]; // offset 0x0
    int32 m_iTargetPosIndex; // offset 0x14D0, size 0x4, align 4
    bool m_bShadowFormCast; // offset 0x14D4, size 0x1, align 1
    char _pad_14D5[0x3]; // offset 0x14D5
    VectorWS m_vYamatoCastPos; // offset 0x14D8, size 0xC, align 4
    VectorWS m_vTargetCastPos; // offset 0x14E4, size 0xC, align 4
    GameTime_t m_flFlyingToTargetStartTime; // offset 0x14F0, size 0x4, align 255
    GameTime_t m_flEndAttackTime; // offset 0x14F4, size 0x4, align 255
    GameTime_t m_flGrappleStartTime; // offset 0x14F8, size 0x4, align 255
    GameTime_t m_flGrappleArriveTime; // offset 0x14FC, size 0x4, align 255
    GameTime_t m_flAttackLatchTime; // offset 0x1500, size 0x4, align 255
    VectorWS m_vAttackLatchPos; // offset 0x1504, size 0xC, align 4
    CHandle< CBaseEntity > m_hTarget; // offset 0x1510, size 0x4, align 4
    bool m_bIsTargetAlly; // offset 0x1514, size 0x1, align 1
    char _pad_1515[0x3]; // offset 0x1515
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1518, size 0x4, align 255
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x151C, size 0x4, align 4
    VectorWS[20] m_rgPath; // offset 0x1520, size 0xF0, align 4
    int32 m_nPathIdx; // offset 0x1610, size 0x4, align 4
    int32 m_nPathSize; // offset 0x1614, size 0x4, align 4
    float32 m_flPathLength; // offset 0x1618, size 0x4, align 4
    Vector m_vFlyingInitialOffsetToPath; // offset 0x161C, size 0xC, align 4
    float32 flDistFlown; // offset 0x1628, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x162C, size 0xC, align 4
    char _pad_1638[0x2C0]; // offset 0x1638
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x18F8, size 0x4, align 255
    char _pad_18FC[0x54]; // offset 0x18FC
    bool m_bPathDirty; // offset 0x1950, size 0x1, align 1
    bool m_bJumpSoundPlayed; // offset 0x1951, size 0x1, align 1
    char _pad_1952[0x6]; // offset 0x1952
};
