#pragma once

class CDOTA_Modifier_Miniboss_UnyieldingShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 damage_absorb; // offset 0x1AF8, size 0x4, align 4
    float32 regen_per_second; // offset 0x1AFC, size 0x4, align 4
    float32 regen_bonus_per_interval; // offset 0x1B00, size 0x4, align 4
    int32 status_resistance; // offset 0x1B04, size 0x4, align 4
    bool smaller_shield; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    float32 m_flDamageAbsorbed; // offset 0x1B0C, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1B10, size 0x4, align 255
    ParticleIndex_t nFXIndex; // offset 0x1B14, size 0x4, align 255
    int32 m_nVisualTeam; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
