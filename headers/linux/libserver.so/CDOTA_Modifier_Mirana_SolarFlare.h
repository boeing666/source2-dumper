#pragma once

class CDOTA_Modifier_Mirana_SolarFlare : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 duration; // offset 0x1AF8, size 0x4, align 4
    float32 smoothness; // offset 0x1AFC, size 0x4, align 4
    float32 increase_rate; // offset 0x1B00, size 0x4, align 4
    int32 max_attack_speed_increase; // offset 0x1B04, size 0x4, align 4
    int32 max_damage_increase; // offset 0x1B08, size 0x4, align 4
    GameTime_t flMaxDamageGameTime; // offset 0x1B0C, size 0x4, align 255
    int32 evasion; // offset 0x1B10, size 0x4, align 4
    int32 m_iTotalAmount; // offset 0x1B14, size 0x4, align 4
    int32 ally_pct; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
