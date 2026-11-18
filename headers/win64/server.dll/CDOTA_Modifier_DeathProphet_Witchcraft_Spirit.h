#pragma once

class CDOTA_Modifier_DeathProphet_Witchcraft_Spirit : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 spirit_speed; // offset 0x1AFC, size 0x4, align 4
    float32 max_distance; // offset 0x1B00, size 0x4, align 4
    float32 give_up_distance; // offset 0x1B04, size 0x4, align 4
    float32 attack_damage_pct; // offset 0x1B08, size 0x4, align 4
    float32 building_damage_pct; // offset 0x1B0C, size 0x4, align 4
    float32 heal_percent; // offset 0x1B10, size 0x4, align 4
    int32 spirit_duration; // offset 0x1B14, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1B18, size 0x4, align 255
    GameTime_t m_fLastThinkTime; // offset 0x1B1C, size 0x4, align 255
    bool m_bExpired; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
    sSpiritInfo* m_SpiritInfo; // offset 0x1B28, size 0x8, align 8
    char _pad_1B30[0x18]; // offset 0x1B30
};
