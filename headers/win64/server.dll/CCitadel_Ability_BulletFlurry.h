#pragma once

class CCitadel_Ability_BulletFlurry : public CCitadelBaseAbility /*0x0*/  // sizeof 0x12C0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CCitadelAutoScaledTime m_flFlurryEndTime; // offset 0xF70, size 0x18, align 255 | MNetworkEnable
    GameTime_t m_flNextAttackTime; // offset 0xF88, size 0x4, align 255 | MNetworkEnable
    char _pad_0F8C[0x304]; // offset 0xF8C
    CUtlVector< CHandle< CBaseEntity > > m_vecShootTargets; // offset 0x1290, size 0x18, align 8
    int32 m_nNumPlayersKilled; // offset 0x12A8, size 0x4, align 4
    int32 m_nShootIndex; // offset 0x12AC, size 0x4, align 4
    int32 m_nShootIndexNPC; // offset 0x12B0, size 0x4, align 4
    int32 m_nBurstShots; // offset 0x12B4, size 0x4, align 4
    bool m_bHasCameraOverride; // offset 0x12B8, size 0x1, align 1
    char _pad_12B9[0x3]; // offset 0x12B9
    ParticleIndex_t m_nConeVFX; // offset 0x12BC, size 0x4, align 255
};
