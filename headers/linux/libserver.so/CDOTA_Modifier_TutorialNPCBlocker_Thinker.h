#pragma once

class CDOTA_Modifier_TutorialNPCBlocker_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    Vector m_vecStart; // offset 0x1A78, size 0xC, align 4
    Vector m_vecEnd; // offset 0x1A84, size 0xC, align 4
    float32 m_flRadius; // offset 0x1A90, size 0x4, align 4
    bool m_bHidden; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
};
