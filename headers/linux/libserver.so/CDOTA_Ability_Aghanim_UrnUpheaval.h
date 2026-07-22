#pragma once

class CDOTA_Ability_Aghanim_UrnUpheaval : public CDOTABaseAbility /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vPosition; // offset 0x85C, size 0xC, align 4
    float32 aoe; // offset 0x868, size 0x4, align 4
    float32 slow_rate; // offset 0x86C, size 0x4, align 4
    float32 slow_rate_duration; // offset 0x870, size 0x4, align 4
    float32 duration; // offset 0x874, size 0x4, align 4
    float32 max_slow; // offset 0x878, size 0x4, align 4
    float32 burn_damage; // offset 0x87C, size 0x4, align 4
    float32 m_flCurrentSlow; // offset 0x880, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x884, size 0x4, align 255
    CountdownTimer m_SlowTimer; // offset 0x888, size 0x18, align 8
    CountdownTimer m_timer; // offset 0x8A0, size 0x18, align 8
    char _pad_08B8[0x18]; // offset 0x8B8
};
