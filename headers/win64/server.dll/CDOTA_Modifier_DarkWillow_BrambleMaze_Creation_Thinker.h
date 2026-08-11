#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 latch_creation_interval; // offset 0x1A78, size 0x4, align 4
    float32 initial_creation_delay; // offset 0x1A7C, size 0x4, align 4
    int32 placement_count; // offset 0x1A80, size 0x4, align 4
    float32 placement_duration; // offset 0x1A84, size 0x4, align 4
    float32 extra_brambles_placement_duration; // offset 0x1A88, size 0x4, align 4
    int32 m_iBramblesIndex; // offset 0x1A8C, size 0x4, align 4
};
