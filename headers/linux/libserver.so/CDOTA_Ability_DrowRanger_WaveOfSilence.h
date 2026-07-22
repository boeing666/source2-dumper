#pragma once

class CDOTA_Ability_DrowRanger_WaveOfSilence : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    VectorWS m_vStartPosition; // offset 0x85C, size 0xC, align 4
    VectorWS m_vEndPosition; // offset 0x868, size 0xC, align 4
    float32 wave_width; // offset 0x874, size 0x4, align 4
    float32 wave_speed; // offset 0x878, size 0x4, align 4
    float32 silence_duration; // offset 0x87C, size 0x4, align 4
    float32 knockback_distance_max; // offset 0x880, size 0x4, align 4
    int32 m_nHeroesHit; // offset 0x884, size 0x4, align 4
};
