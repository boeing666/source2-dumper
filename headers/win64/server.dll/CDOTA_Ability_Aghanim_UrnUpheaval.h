#pragma once

class CDOTA_Ability_Aghanim_UrnUpheaval : public CDOTABaseAbility /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vPosition; // offset 0x580, size 0xC, align 4
    float32 aoe; // offset 0x58C, size 0x4, align 4
    float32 slow_rate; // offset 0x590, size 0x4, align 4
    float32 slow_rate_duration; // offset 0x594, size 0x4, align 4
    float32 duration; // offset 0x598, size 0x4, align 4
    float32 max_slow; // offset 0x59C, size 0x4, align 4
    float32 burn_damage; // offset 0x5A0, size 0x4, align 4
    float32 m_flCurrentSlow; // offset 0x5A4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x5A8, size 0x4, align 255
    char _pad_05AC[0x4]; // offset 0x5AC
    CountdownTimer m_SlowTimer; // offset 0x5B0, size 0x18, align 8
    CountdownTimer m_timer; // offset 0x5C8, size 0x18, align 8
    char _pad_05E0[0x18]; // offset 0x5E0
};
