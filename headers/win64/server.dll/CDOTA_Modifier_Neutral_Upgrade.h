#pragma once

class CDOTA_Modifier_Neutral_Upgrade : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 increase_time; // offset 0x1AF8, size 0x4, align 4
    int32 increase_damage; // offset 0x1AFC, size 0x4, align 4
    int32 increase_health; // offset 0x1B00, size 0x4, align 4
    float32 increase_armor; // offset 0x1B04, size 0x4, align 4
    int32 increase_aspd; // offset 0x1B08, size 0x4, align 4
    int32 increase_gold; // offset 0x1B0C, size 0x4, align 4
    int32 increase_xp; // offset 0x1B10, size 0x4, align 4
    int32 current_level; // offset 0x1B14, size 0x4, align 4
    int32 max_level; // offset 0x1B18, size 0x4, align 4
    int32 m_nAppliedMinGold; // offset 0x1B1C, size 0x4, align 4
    int32 m_nAppliedMaxGold; // offset 0x1B20, size 0x4, align 4
    char _pad_1B24[0x4]; // offset 0x1B24
};
