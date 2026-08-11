#pragma once

class CDOTA_Modifier_Miniboss_UnyieldingShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 damage_absorb; // offset 0x1A78, size 0x4, align 4
    float32 regen_per_second; // offset 0x1A7C, size 0x4, align 4
    float32 regen_bonus_per_interval; // offset 0x1A80, size 0x4, align 4
    int32 status_resistance; // offset 0x1A84, size 0x4, align 4
    bool smaller_shield; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    float32 m_flDamageAbsorbed; // offset 0x1A8C, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1A90, size 0x4, align 255
    ParticleIndex_t nFXIndex; // offset 0x1A94, size 0x4, align 255
    int32 m_nVisualTeam; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
