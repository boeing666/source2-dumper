#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0x11A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1191]; // offset 0x0
    bool m_bBeenEnabled; // offset 0x1191, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0x1192, size 0x1, align 1 | MNotSaved
    char _pad_1193[0x1]; // offset 0x1193
    float32 m_flSeenTargetTime; // offset 0x1194, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0x1198, size 0x8, align 8 | MNotSaved
};
