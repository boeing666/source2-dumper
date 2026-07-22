#pragma once

class C_DOTA_Ability_DeathProphet_CarrionSwarm : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 start_radius; // offset 0x824, size 0x4, align 4
    float32 end_radius; // offset 0x828, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x82C, size 0x4, align 255
    float32 m_fTotalTime; // offset 0x830, size 0x4, align 4
    int32 m_nProjectileHandle; // offset 0x834, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x838, size 0x4, align 255
    char _pad_083C[0x4]; // offset 0x83C
};
