#pragma once

class CDOTA_Modifier_Abaddon_AphoticShield : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 damage_absorb; // offset 0x1AFC, size 0x4, align 4
    int32 regen; // offset 0x1B00, size 0x4, align 4
    int32 m_nDamageAbsorbed; // offset 0x1B04, size 0x4, align 4
    float32 absorb_to_damage; // offset 0x1B08, size 0x4, align 4
    float32 absorb_damage_aoe; // offset 0x1B0C, size 0x4, align 4
    GameTime_t m_flLastTickTime; // offset 0x1B10, size 0x4, align 255
    char _pad_1B14[0x4]; // offset 0x1B14
};
