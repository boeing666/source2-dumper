#pragma once

class CDOTA_Ability_AghsFort_Creature_Phoenix_LaunchFireSpirit : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 spirit_speed; // offset 0x824, size 0x4, align 4
    float32 duration; // offset 0x828, size 0x4, align 4
    int32 radius; // offset 0x82C, size 0x4, align 4
    int32 hp_cost_perc; // offset 0x830, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x834, size 0x4, align 255
};
