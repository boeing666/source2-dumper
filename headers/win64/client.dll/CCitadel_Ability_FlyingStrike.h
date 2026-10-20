#pragma once

class CCitadel_Ability_FlyingStrike : public CCitadelBaseYamatoAbility /*0x0*/  // sizeof 0x1B98, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1710]; // offset 0x0
    SatVolumeIndex_t m_desatVolIdx; // offset 0x1710, size 0x4, align 255
    bool m_bShadowFormCast; // offset 0x1714, size 0x1, align 1
    char _pad_1715[0x3]; // offset 0x1715
    VectorWS m_vYamatoCastPos; // offset 0x1718, size 0xC, align 4
    VectorWS m_vTargetCastPos; // offset 0x1724, size 0xC, align 4
    GameTime_t m_flFlyingToTargetStartTime; // offset 0x1730, size 0x4, align 255
    GameTime_t m_flEndAttackTime; // offset 0x1734, size 0x4, align 255
    GameTime_t m_flGrappleStartTime; // offset 0x1738, size 0x4, align 255
    GameTime_t m_flGrappleArriveTime; // offset 0x173C, size 0x4, align 255
    GameTime_t m_flAttackLatchTime; // offset 0x1740, size 0x4, align 255
    VectorWS m_vAttackLatchPos; // offset 0x1744, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1750, size 0x4, align 4
    bool m_bIsTargetAlly; // offset 0x1754, size 0x1, align 1
    char _pad_1755[0x3]; // offset 0x1755
    GameTime_t m_flGrappleShotAttackTime; // offset 0x1758, size 0x4, align 255
    char _pad_175C[0x4]; // offset 0x175C
    VectorWS[20] m_rgPath; // offset 0x1760, size 0xF0, align 4
    int32 m_nPathIdx; // offset 0x1850, size 0x4, align 4
    int32 m_nPathSize; // offset 0x1854, size 0x4, align 4
    float32 m_flPathLength; // offset 0x1858, size 0x4, align 4
    Vector m_vFlyingInitialOffsetToPath; // offset 0x185C, size 0xC, align 4
    float32 flDistFlown; // offset 0x1868, size 0x4, align 4
    VectorWS m_vLastSafePos; // offset 0x186C, size 0xC, align 4
    char _pad_1878[0x2C0]; // offset 0x1878
    ParticleIndex_t m_nGrappleTravelEffect; // offset 0x1B38, size 0x4, align 255
    char _pad_1B3C[0x54]; // offset 0x1B3C
    bool m_bPathDirty; // offset 0x1B90, size 0x1, align 1
    bool m_bJumpSoundPlayed; // offset 0x1B91, size 0x1, align 1
    char _pad_1B92[0x6]; // offset 0x1B92
};
