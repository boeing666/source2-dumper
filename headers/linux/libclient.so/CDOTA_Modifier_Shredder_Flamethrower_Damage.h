#pragma once

class CDOTA_Modifier_Shredder_Flamethrower_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    ParticleIndex_t m_nActiveFXIndex; // offset 0x1A5C, size 0x4, align 255
    ParticleIndex_t m_nActiveStatusFXIndex; // offset 0x1A60, size 0x4, align 255
    float32 damage_per_second; // offset 0x1A64, size 0x4, align 4
    int32 building_dmg_pct; // offset 0x1A68, size 0x4, align 4
    int32 move_slow_pct; // offset 0x1A6C, size 0x4, align 4
};
