#pragma once

class CDOTA_Modifier_Oracle_Prognosticate : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 current_rune_location; // offset 0x1AA8, size 0x4, align 4
    int32 next_rune_location; // offset 0x1AAC, size 0x4, align 4
    int32 current_rune_type; // offset 0x1AB0, size 0x4, align 4
    int32 next_rune_type; // offset 0x1AB4, size 0x4, align 4
    bool started_spawning; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    float32 next_rune_spawn_time; // offset 0x1ABC, size 0x4, align 4
    bool m_bIsActive; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
