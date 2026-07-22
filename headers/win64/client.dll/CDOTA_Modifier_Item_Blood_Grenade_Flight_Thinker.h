#pragma once

class CDOTA_Modifier_Item_Blood_Grenade_Flight_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 speed; // offset 0x1A58, size 0x4, align 4
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    int32 damage_over_time; // offset 0x1A60, size 0x4, align 4
    int32 impact_damage; // offset 0x1A64, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A68, size 0x4, align 4
    int32 movespeed_slow; // offset 0x1A6C, size 0x4, align 4
    float32 tick_rate; // offset 0x1A70, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A74, size 0x4, align 255
};
