#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xF60, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF49]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xF49, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xF4A, size 0x1, align 1 | MNotSaved
    char _pad_0F4B[0x1]; // offset 0xF4B
    float32 m_flSeenTargetTime; // offset 0xF4C, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xF50, size 0x8, align 8 | MNotSaved
    char _pad_0F58[0x8]; // offset 0xF58
};
