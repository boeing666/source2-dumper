#pragma once

class CAbility_Synth_Barrage : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1E80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1E70]; // offset 0x0
    int32 m_nProjectilesScheduled; // offset 0x1E70, size 0x4, align 4
    ParticleIndex_t m_ChannelParticle; // offset 0x1E74, size 0x4, align 255
    GameTime_t m_flNextShootTime; // offset 0x1E78, size 0x4, align 255
    char _pad_1E7C[0x4]; // offset 0x1E7C
};
