#pragma once

class CDOTA_Modifier_DarkWillow_BrambleMaze_Creation_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 latch_creation_interval; // offset 0x1A58, size 0x4, align 4
    float32 initial_creation_delay; // offset 0x1A5C, size 0x4, align 4
    int32 placement_count; // offset 0x1A60, size 0x4, align 4
    float32 placement_duration; // offset 0x1A64, size 0x4, align 4
    float32 extra_brambles_placement_duration; // offset 0x1A68, size 0x4, align 4
    int32 m_iBramblesIndex; // offset 0x1A6C, size 0x4, align 4
};
