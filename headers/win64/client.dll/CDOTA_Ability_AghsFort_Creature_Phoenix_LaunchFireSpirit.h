#pragma once

class CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 spirit_speed; // offset 0x6A8, size 0x4, align 4
    float32 duration; // offset 0x6AC, size 0x4, align 4
    int32 radius; // offset 0x6B0, size 0x4, align 4
    int32 hp_cost_perc; // offset 0x6B4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x6B8, size 0x4, align 255
    char _pad_06BC[0x4]; // offset 0x6BC
};
