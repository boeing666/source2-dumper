#pragma once

class CDOTA_Modifier_Rubick_Might_And_Magus : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 magic_resist_bonus; // offset 0x1AF8, size 0x4, align 4
    float32 aoe_bonus; // offset 0x1AFC, size 0x4, align 4
    float32 aoe_bonus_duration; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< GameTime_t > m_vecAoEExpireTimes; // offset 0x1B08, size 0x18, align 8
};
