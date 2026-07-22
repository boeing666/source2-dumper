#pragma once

class CDOTA_Ability_DeathProphet_CarrionSwarm : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 start_radius; // offset 0x85C, size 0x4, align 4
    float32 end_radius; // offset 0x860, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x864, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x868, size 0x4, align 4
    int32 m_nProjectileHandle; // offset 0x86C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x870, size 0x4, align 255
    char _pad_0874[0x4]; // offset 0x874
};
