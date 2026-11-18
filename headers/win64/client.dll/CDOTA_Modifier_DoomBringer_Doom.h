#pragma once

class CDOTA_Modifier_DoomBringer_Doom : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 damage; // offset 0x1AF8, size 0x4, align 4
    float32 duration; // offset 0x1AFC, size 0x4, align 4
    int32 deniable_pct; // offset 0x1B00, size 0x4, align 4
    float32 flElapsedTime; // offset 0x1B04, size 0x4, align 4
    int32 damage_amp; // offset 0x1B08, size 0x4, align 4
    bool m_bDoesBreak; // offset 0x1B0C, size 0x1, align 1
    bool m_bDoesMute; // offset 0x1B0D, size 0x1, align 1
    char _pad_1B0E[0x2]; // offset 0x1B0E
};
