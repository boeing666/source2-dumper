#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xD00, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xCF0]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xCF0, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xCF1, size 0x1, align 1 | MNotSaved
    char _pad_0CF2[0x2]; // offset 0xCF2
    float32 m_flSeenTargetTime; // offset 0xCF4, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xCF8, size 0x8, align 8 | MNotSaved
};
