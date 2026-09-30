#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE10]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xE10, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xE11, size 0x1, align 1 | MNotSaved
    char _pad_0E12[0x2]; // offset 0xE12
    float32 m_flSeenTargetTime; // offset 0xE14, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xE18, size 0x8, align 8 | MNotSaved
};
