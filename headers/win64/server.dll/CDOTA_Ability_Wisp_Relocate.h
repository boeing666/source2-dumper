#pragma once

class CDOTA_Ability_Wisp_Relocate : public CDOTABaseAbility /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndexEndTeam; // offset 0x580, size 0x4, align 255
    ParticleIndex_t m_nFXIndexChannel; // offset 0x584, size 0x4, align 255
    float32 cast_delay; // offset 0x588, size 0x4, align 4
    float32 return_time; // offset 0x58C, size 0x4, align 4
};
