#pragma once

class CDOTA_Modifier_Oracle_Prognosticate : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 current_rune_location; // offset 0x1A78, size 0x4, align 4
    int32 next_rune_location; // offset 0x1A7C, size 0x4, align 4
    int32 current_rune_type; // offset 0x1A80, size 0x4, align 4
    int32 next_rune_type; // offset 0x1A84, size 0x4, align 4
    bool started_spawning; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    float32 next_rune_spawn_time; // offset 0x1A8C, size 0x4, align 4
    bool m_bIsActive; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x7]; // offset 0x1A91
};
