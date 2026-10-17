#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 latch_creation_interval; // offset 0x1AA8, size 0x4, align 4
    float32 initial_creation_delay; // offset 0x1AAC, size 0x4, align 4
    int32 placement_count; // offset 0x1AB0, size 0x4, align 4
    float32 placement_duration; // offset 0x1AB4, size 0x4, align 4
    float32 extra_brambles_placement_duration; // offset 0x1AB8, size 0x4, align 4
    int32 m_iBramblesIndex; // offset 0x1ABC, size 0x4, align 4
};
