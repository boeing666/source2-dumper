#pragma once

class C_DOTA_Ability_Wisp_Relocate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndexEndTeam; // offset 0x6A8, size 0x4, align 255
    ParticleIndex_t m_nFXIndexChannel; // offset 0x6AC, size 0x4, align 255
    float32 cast_delay; // offset 0x6B0, size 0x4, align 4
    float32 return_time; // offset 0x6B4, size 0x4, align 4
};
