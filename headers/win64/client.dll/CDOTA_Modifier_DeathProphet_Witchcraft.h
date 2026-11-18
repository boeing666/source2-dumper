#pragma once

class CDOTA_Modifier_DeathProphet_Witchcraft : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 movement_speed_pct; // offset 0x1AF8, size 0x4, align 4
    int32 spirits; // offset 0x1AFC, size 0x4, align 4
    float32 attack_damage_pct; // offset 0x1B00, size 0x4, align 4
    int32 m_nSpiritDamage; // offset 0x1B04, size 0x4, align 4
};
