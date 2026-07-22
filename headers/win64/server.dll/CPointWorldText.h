#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xA20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    char[512] m_messageText; // offset 0x770, size 0x200, align 1
    char[64] m_FontName; // offset 0x970, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0x9B0, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x9F0, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0x9F1, size 0x1, align 1 | MNotSaved
    char _pad_09F2[0x2]; // offset 0x9F2
    float32 m_flWorldUnitsPerPx; // offset 0x9F4, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0x9F8, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0x9FC, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xA00, size 0x1, align 1 | MNotSaved
    char _pad_0A01[0x3]; // offset 0xA01
    float32 m_flBackgroundBorderWidth; // offset 0xA04, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xA08, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xA0C, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xA10, size 0x4, align 1 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xA14, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xA18, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xA1C, size 0x4, align 4 | MNotSaved
};
