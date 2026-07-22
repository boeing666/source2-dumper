#pragma once

class C_DOTA_Ability_Aghanim_UrnUpheaval : public C_DOTABaseAbility /*0x0*/  // sizeof 0x720, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vPosition; // offset 0x6A8, size 0xC, align 4
    float32 aoe; // offset 0x6B4, size 0x4, align 4
    float32 slow_rate; // offset 0x6B8, size 0x4, align 4
    float32 slow_rate_duration; // offset 0x6BC, size 0x4, align 4
    float32 duration; // offset 0x6C0, size 0x4, align 4
    float32 max_slow; // offset 0x6C4, size 0x4, align 4
    float32 burn_damage; // offset 0x6C8, size 0x4, align 4
    float32 m_flCurrentSlow; // offset 0x6CC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6D0, size 0x4, align 255
    char _pad_06D4[0x4]; // offset 0x6D4
    CountdownTimer m_SlowTimer; // offset 0x6D8, size 0x18, align 8
    CountdownTimer m_timer; // offset 0x6F0, size 0x18, align 8
    char _pad_0708[0x18]; // offset 0x708
};
