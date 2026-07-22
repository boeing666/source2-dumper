#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xE70, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE59]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xE59, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xE5A, size 0x1, align 1 | MNotSaved
    char _pad_0E5B[0x1]; // offset 0xE5B
    float32 m_flSeenTargetTime; // offset 0xE5C, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xE60, size 0x8, align 8 | MNotSaved
    char _pad_0E68[0x8]; // offset 0xE68
};
