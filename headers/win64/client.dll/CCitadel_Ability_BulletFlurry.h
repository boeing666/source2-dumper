#pragma once

class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CCitadelAutoScaledTime m_flFlurryEndTime; // offset 0x16E0, size 0x18, align 255
    GameTime_t m_flNextAttackTime; // offset 0x16F8, size 0x4, align 255
    char _pad_16FC[0x4D4]; // offset 0x16FC
    CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // offset 0x1BD0, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x1BE8, size 0x4, align 4
    int32 m_nShootIndex; // offset 0x1BEC, size 0x4, align 4
    int32 m_nShootIndexNPC; // offset 0x1BF0, size 0x4, align 4
    int32 m_nBurstShots; // offset 0x1BF4, size 0x4, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x1BF8, size 0x4, align 255
    bool m_bHasCameraOverride; // offset 0x1BFC, size 0x1, align 1
    char _pad_1BFD[0x3]; // offset 0x1BFD
    ParticleIndex_t m_nConeVFX; // offset 0x1C00, size 0x4, align 255
    char _pad_1C04[0x4]; // offset 0x1C04
};
