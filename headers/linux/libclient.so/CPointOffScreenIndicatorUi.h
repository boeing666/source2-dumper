#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xFB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFA1]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xFA1, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xFA2, size 0x1, align 1 | MNotSaved
    char _pad_0FA3[0x1]; // offset 0xFA3
    float32 m_flSeenTargetTime; // offset 0xFA4, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xFA8, size 0x8, align 8 | MNotSaved
};
