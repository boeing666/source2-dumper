#pragma once

class CDOTA_Modifier_Clinkz_Burning_Army : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 attack_rate; // offset 0x1AF8, size 0x4, align 4
    int32 damage_percent; // offset 0x1AFC, size 0x4, align 4
    int32 skeleton_health; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B04, size 0x4, align 255
    int32 skeleton_building_damage_reduction; // offset 0x1B08, size 0x4, align 4
    int32 m_nDamageCounter; // offset 0x1B0C, size 0x4, align 4
};
