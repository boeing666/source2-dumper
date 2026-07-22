#pragma once

class CDOTA_Ability_Phoenix_LaunchFireSpirit : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 spirit_speed; // offset 0x85C, size 0x4, align 4
    float32 duration; // offset 0x860, size 0x4, align 4
    float32 radius; // offset 0x864, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x868, size 0x4, align 255
    char _pad_086C[0x4]; // offset 0x86C
};
