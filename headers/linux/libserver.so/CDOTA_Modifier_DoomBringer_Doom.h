#pragma once

class CDOTA_Modifier_DoomBringer_Doom : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage; // offset 0x1AA8, size 0x4, align 4
    float32 duration; // offset 0x1AAC, size 0x4, align 4
    int32 deniable_pct; // offset 0x1AB0, size 0x4, align 4
    float32 flElapsedTime; // offset 0x1AB4, size 0x4, align 4
    int32 damage_amp; // offset 0x1AB8, size 0x4, align 4
    bool m_bDoesBreak; // offset 0x1ABC, size 0x1, align 1
    bool m_bDoesMute; // offset 0x1ABD, size 0x1, align 1
    char _pad_1ABE[0x2]; // offset 0x1ABE
};
