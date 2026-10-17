#pragma once

class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    Vector m_vecStart; // offset 0x1AA8, size 0xC, align 4
    Vector m_vecEnd; // offset 0x1AB4, size 0xC, align 4
    float32 m_flRadius; // offset 0x1AC0, size 0x4, align 4
    bool m_bHidden; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
};
