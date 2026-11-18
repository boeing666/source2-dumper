#pragma once

class CDOTA_Modifier_Oracle_Prognosticate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 current_rune_location; // offset 0x1AF8, size 0x4, align 4
    int32 next_rune_location; // offset 0x1AFC, size 0x4, align 4
    int32 current_rune_type; // offset 0x1B00, size 0x4, align 4
    int32 next_rune_type; // offset 0x1B04, size 0x4, align 4
    bool started_spawning; // offset 0x1B08, size 0x1, align 1
    char _pad_1B09[0x3]; // offset 0x1B09
    float32 next_rune_spawn_time; // offset 0x1B0C, size 0x4, align 4
    bool m_bIsActive; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x7]; // offset 0x1B11
};
