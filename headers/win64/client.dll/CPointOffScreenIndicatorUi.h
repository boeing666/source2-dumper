#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0x1310, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1300]; // offset 0x0
    bool m_bBeenEnabled; // offset 0x1300, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0x1301, size 0x1, align 1 | MNotSaved
    char _pad_1302[0x2]; // offset 0x1302
    float32 m_flSeenTargetTime; // offset 0x1304, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0x1308, size 0x8, align 8 | MNotSaved
};
