#pragma once

class CDOTA_Modifier_Miniboss_UnyieldingShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 damage_absorb; // offset 0x1AA8, size 0x4, align 4
    float32 regen_per_second; // offset 0x1AAC, size 0x4, align 4
    float32 regen_bonus_per_interval; // offset 0x1AB0, size 0x4, align 4
    int32 status_resistance; // offset 0x1AB4, size 0x4, align 4
    bool smaller_shield; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    float32 m_flDamageAbsorbed; // offset 0x1ABC, size 0x4, align 4
    GameTime_t m_timeLastTick; // offset 0x1AC0, size 0x4, align 255
    ParticleIndex_t nFXIndex; // offset 0x1AC4, size 0x4, align 255
    int32 m_nVisualTeam; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
