#pragma once

class CDOTA_Modifier_Batrider_StickyNapalm : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 movement_speed_pct; // offset 0x1A78, size 0x4, align 4
    int32 turn_rate_pct; // offset 0x1A7C, size 0x4, align 4
    float32 damage; // offset 0x1A80, size 0x4, align 4
    float32 application_damage; // offset 0x1A84, size 0x4, align 4
    float32 building_damage_pct; // offset 0x1A88, size 0x4, align 4
    float32 creep_damage_pct; // offset 0x1A8C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A90, size 0x4, align 255
    ParticleIndex_t m_nFXStackIndex; // offset 0x1A94, size 0x4, align 255
};
