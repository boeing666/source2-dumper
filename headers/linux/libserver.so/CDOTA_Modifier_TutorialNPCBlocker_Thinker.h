#pragma once

class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    Vector m_vecStart; // offset 0x1A58, size 0xC, align 4
    Vector m_vecEnd; // offset 0x1A64, size 0xC, align 4
    float32 m_flRadius; // offset 0x1A70, size 0x4, align 4
    bool m_bHidden; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
};
