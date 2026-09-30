#pragma once

class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1708]; // offset 0x0
    SatVolumeIndex_t m_desatVolIdx; // offset 0x1708, size 0x4, align 255
    bool m_bShadowFormCast; // offset 0x170C, size 0x1, align 1
    char _pad_170D[0x3]; // offset 0x170D
    VectorWS m_vYamatoCastPos; // offset 0x1710, size 0xC, align 4
    VectorWS m_vTargetCastPos; // offset 0x171C, size 0xC, align 4
    GameTime_t m_flFlyingToTargetStartTime; // offset 0x1728, size 0x4, align 255
    GameTime_t m_flEndAttackTime; // offset 0x172C, size 0x4, align 255
    GameTime_t m_flGrappleStartTime; // offset 0x1730, size 0x4, align 255
    GameTime_t m_flGrappleArriveTime; // offset 0x1734, size 0x4, align 255
    GameTime_t m_flAttackLatchTime; // offset 0x1738, size 0x4, align 255
    VectorWS m_vAttackLatchPos; // offset 0x173C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1748, size 0x4, align 4
    bool m_bIsTargetAlly; // offset 0x174C, size 0x1, align 1
    char _pad_174D[0x3]; // offset 0x174D
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1750, size 0x4, align 255
    char _pad_1754[0x4]; // offset 0x1754
    VectorWS[20] m_rgPath; // offset 0x1758, size 0xF0, align 4
    int32 m_nPathIdx; // offset 0x1848, size 0x4, align 4
    int32 m_nPathSize; // offset 0x184C, size 0x4, align 4
    float32 m_flPathLength; // offset 0x1850, size 0x4, align 4
    Vector m_vFlyingInitialOffsetToPath; // offset 0x1854, size 0xC, align 4
    float32 flDistFlown; // offset 0x1860, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x1864, size 0xC, align 4
    char _pad_1870[0x2C0]; // offset 0x1870
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1B30, size 0x4, align 255
    char _pad_1B34[0x54]; // offset 0x1B34
    bool m_bPathDirty; // offset 0x1B88, size 0x1, align 1
    bool m_bJumpSoundPlayed; // offset 0x1B89, size 0x1, align 1
    char _pad_1B8A[0x6]; // offset 0x1B8A
};
