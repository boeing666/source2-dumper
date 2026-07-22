#pragma once

class CDOTA_Modifier_DoomBringer_Doom : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 damage; // offset 0x1A58, size 0x4, align 4
    float32 duration; // offset 0x1A5C, size 0x4, align 4
    int32 deniable_pct; // offset 0x1A60, size 0x4, align 4
    float32 flElapsedTime; // offset 0x1A64, size 0x4, align 4
    int32 damage_amp; // offset 0x1A68, size 0x4, align 4
    bool m_bDoesBreak; // offset 0x1A6C, size 0x1, align 1
    bool m_bDoesMute; // offset 0x1A6D, size 0x1, align 1
    char _pad_1A6E[0x2]; // offset 0x1A6E
};
