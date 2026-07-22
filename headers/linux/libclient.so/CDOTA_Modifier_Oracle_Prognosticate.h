#pragma once

class CDOTA_Modifier_Oracle_Prognosticate : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 current_rune_location; // offset 0x1A58, size 0x4, align 4
    int32 next_rune_location; // offset 0x1A5C, size 0x4, align 4
    int32 current_rune_type; // offset 0x1A60, size 0x4, align 4
    int32 next_rune_type; // offset 0x1A64, size 0x4, align 4
    bool started_spawning; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x3]; // offset 0x1A69
    float32 next_rune_spawn_time; // offset 0x1A6C, size 0x4, align 4
    bool m_bIsActive; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x7]; // offset 0x1A71
};
