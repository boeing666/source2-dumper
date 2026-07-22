#pragma once

class CDOTA_Ability_Phoenix_LaunchFireSpirit : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 spirit_speed; // offset 0x580, size 0x4, align 4
    float32 duration; // offset 0x584, size 0x4, align 4
    float32 radius; // offset 0x588, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x58C, size 0x4, align 255
};
