#pragma once

class CDOTA_Modifier_Abaddon_AphoticShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 damage_absorb; // offset 0x1A5C, size 0x4, align 4
    int32 regen; // offset 0x1A60, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1A64, size 0x4, align 4
    float32 absorb_to_damage; // offset 0x1A68, size 0x4, align 4
    float32 absorb_damage_aoe; // offset 0x1A6C, size 0x4, align 4
    GameTime_t m_flLastTickTime; // offset 0x1A70, size 0x4, align 255
    char _pad_1A74[0x4]; // offset 0x1A74
};
