#pragma once

class CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 crack_width; // offset 0x1AF8, size 0x4, align 4
    int32 damage_pct; // offset 0x1AFC, size 0x4, align 4
    float32 slow_duration; // offset 0x1B00, size 0x4, align 4
    float32 slow_duration_scepter; // offset 0x1B04, size 0x4, align 4
    CDOTA_Buff* m_pParentModifier; // offset 0x1B08, size 0x8, align 8
};
