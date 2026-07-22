#pragma once

class CCitadel_Ability_BulletFlurry : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1530, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CCitadelAutoScaledTime m_flFlurryEndTime; // offset 0x11D8, size 0x18, align 255 | MNetworkEnable
    GameTime_t m_flNextAttackTime; // offset 0x11F0, size 0x4, align 255 | MNetworkEnable
    char _pad_11F4[0x304]; // offset 0x11F4
    CUtlVector< CHandle< C_BaseEntity > > m_vecShootTargets; // offset 0x14F8, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x1510, size 0x4, align 4
    int32 m_nShootIndex; // offset 0x1514, size 0x4, align 4
    int32 m_nShootIndexNPC; // offset 0x1518, size 0x4, align 4
    int32 m_nBurstShots; // offset 0x151C, size 0x4, align 4
    SatVolumeIndex_t m_nSatVolumeIndex; // offset 0x1520, size 0x4, align 255
    bool m_bHasCameraOverride; // offset 0x1524, size 0x1, align 1
    char _pad_1525[0x3]; // offset 0x1525
    ParticleIndex_t m_nConeVFX; // offset 0x1528, size 0x4, align 255
    char _pad_152C[0x4]; // offset 0x152C
};
