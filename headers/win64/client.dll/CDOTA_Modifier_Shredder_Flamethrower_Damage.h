#pragma once

class CDOTA_Modifier_Shredder_Flamethrower_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nActiveFXIndex; // offset 0x1A7C, size 0x4, align 255
    ParticleIndex_t m_nActiveStatusFXIndex; // offset 0x1A80, size 0x4, align 255
    float32 damage_per_second; // offset 0x1A84, size 0x4, align 4
    int32 building_dmg_pct; // offset 0x1A88, size 0x4, align 4
    int32 move_slow_pct; // offset 0x1A8C, size 0x4, align 4
};
