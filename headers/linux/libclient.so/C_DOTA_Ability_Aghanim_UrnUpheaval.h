#pragma once

class C_DOTA_Ability_Aghanim_UrnUpheaval : public C_DOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vPosition; // offset 0x824, size 0xC, align 4
    float32 aoe; // offset 0x830, size 0x4, align 4
    float32 slow_rate; // offset 0x834, size 0x4, align 4
    float32 slow_rate_duration; // offset 0x838, size 0x4, align 4
    float32 duration; // offset 0x83C, size 0x4, align 4
    float32 max_slow; // offset 0x840, size 0x4, align 4
    float32 burn_damage; // offset 0x844, size 0x4, align 4
    float32 m_flCurrentSlow; // offset 0x848, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x84C, size 0x4, align 255
    CountdownTimer m_SlowTimer; // offset 0x850, size 0x18, align 8
    CountdownTimer m_timer; // offset 0x868, size 0x18, align 8
    char _pad_0880[0x18]; // offset 0x880
};
