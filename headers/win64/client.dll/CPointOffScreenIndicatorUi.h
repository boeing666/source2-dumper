#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xDF0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xDE0, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xDE1, size 0x1, align 1 | MNotSaved
    char _pad_0DE2[0x2]; // offset 0xDE2
    float32 m_flSeenTargetTime; // offset 0xDE4, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xDE8, size 0x8, align 8 | MNotSaved
};
