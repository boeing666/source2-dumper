#pragma once

class CDOTA_Modifier_Clinkz_Burning_Army : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 attack_rate; // offset 0x1AA8, size 0x4, align 4
    int32 damage_percent; // offset 0x1AAC, size 0x4, align 4
    int32 skeleton_health; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
    int32 skeleton_building_damage_reduction; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
