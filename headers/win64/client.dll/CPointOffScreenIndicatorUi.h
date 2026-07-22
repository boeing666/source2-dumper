#pragma once

class CPointOffScreenIndicatorUi : public C_PointClientUIWorldPanel /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xC00]; // offset 0x0
    bool m_bBeenEnabled; // offset 0xC00, size 0x1, align 1 | MNotSaved
    bool m_bHide; // offset 0xC01, size 0x1, align 1 | MNotSaved
    char _pad_0C02[0x2]; // offset 0xC02
    float32 m_flSeenTargetTime; // offset 0xC04, size 0x4, align 4 | MNotSaved
    C_PointClientUIWorldPanel* m_pTargetPanel; // offset 0xC08, size 0x8, align 8 | MNotSaved
};
