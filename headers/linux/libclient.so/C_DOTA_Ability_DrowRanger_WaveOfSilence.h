#pragma once

class C_DOTA_Ability_DrowRanger_WaveOfSilence : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 wave_width; // offset 0x828, size 0x4, align 4
    float32 wave_speed; // offset 0x82C, size 0x4, align 4
    float32 silence_duration; // offset 0x830, size 0x4, align 4
    float32 knockback_distance_max; // offset 0x834, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
