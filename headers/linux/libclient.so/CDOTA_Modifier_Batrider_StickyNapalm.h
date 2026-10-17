#pragma once

class CDOTA_Modifier_Batrider_StickyNapalm : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 movement_speed_pct; // offset 0x1AA8, size 0x4, align 4
    int32 turn_rate_pct; // offset 0x1AAC, size 0x4, align 4
    float32 damage; // offset 0x1AB0, size 0x4, align 4
    float32 application_damage; // offset 0x1AB4, size 0x4, align 4
    float32 building_damage_pct; // offset 0x1AB8, size 0x4, align 4
    float32 creep_damage_pct; // offset 0x1ABC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AC0, size 0x4, align 255
    ParticleIndex_t m_nFXStackIndex; // offset 0x1AC4, size 0x4, align 255
};
