#pragma once

class CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 crack_width; // offset 0x1A78, size 0x4, align 4
    int32 damage_pct; // offset 0x1A7C, size 0x4, align 4
    float32 slow_duration; // offset 0x1A80, size 0x4, align 4
    float32 slow_duration_scepter; // offset 0x1A84, size 0x4, align 4
    CDOTA_Buff* m_pParentModifier; // offset 0x1A88, size 0x8, align 8
};
