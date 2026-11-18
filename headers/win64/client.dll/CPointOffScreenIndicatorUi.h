#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE20]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xE20, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xE21, size 0x1, align 1 | MNotSaved
    char _pad_0E22[0x2]; // offset 0xE22
    float32 m_flSeenTargetTime; // offset 0xE24, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xE28, size 0x8, align 8 | MNotSaved
};
