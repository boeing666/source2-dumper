#pragma once

class CDOTA_Modifier_DoomBringer_Doom : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 damage; // offset 0x1A78, size 0x4, align 4
    float32 duration; // offset 0x1A7C, size 0x4, align 4
    int32 deniable_pct; // offset 0x1A80, size 0x4, align 4
    float32 flElapsedTime; // offset 0x1A84, size 0x4, align 4
    int32 damage_amp; // offset 0x1A88, size 0x4, align 4
    bool m_bDoesBreak; // offset 0x1A8C, size 0x1, align 1
    bool m_bDoesMute; // offset 0x1A8D, size 0x1, align 1
    char _pad_1A8E[0x2]; // offset 0x1A8E
};
