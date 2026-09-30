#pragma once

class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1C00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CCitadelAutoScaledTime m_flFlurryEndTime; // offset 0x16D8, size 0x18, align 255
    GameTime_t m_flNextAttackTime; // offset 0x16F0, size 0x4, align 255
    char _pad_16F4[0x4D4]; // offset 0x16F4
    CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // offset 0x1BC8, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x1BE0, size 0x4, align 4
    int32 m_nShootIndex; // offset 0x1BE4, size 0x4, align 4
    int32 m_nShootIndexNPC; // offset 0x1BE8, size 0x4, align 4
    int32 m_nBurstShots; // offset 0x1BEC, size 0x4, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x1BF0, size 0x4, align 255
    bool m_bHasCameraOverride; // offset 0x1BF4, size 0x1, align 1
    char _pad_1BF5[0x3]; // offset 0x1BF5
    ParticleIndex_t m_nConeVFX; // offset 0x1BF8, size 0x4, align 255
    char _pad_1BFC[0x4]; // offset 0x1BFC
};
