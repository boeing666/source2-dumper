#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xEB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xBE0, size 0x1, align 1 | MNotSaved
    char _pad_0BE1[0x17]; // offset 0xBE1
    int32 m_nTextWidthPx; // offset 0xBF8, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xBFC, size 0x4, align 4
    char[512] m_messageText; // offset 0xC00, size 0x200, align 1
    char[64] m_FontName; // offset 0xE00, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xE40, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xE80, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xE81, size 0x1, align 1 | MNotSaved
    char _pad_0E82[0x2]; // offset 0xE82
    float32 m_flWorldUnitsPerPx; // offset 0xE84, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xE88, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xE8C, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xE90, size 0x1, align 1 | MNotSaved
    char _pad_0E91[0x3]; // offset 0xE91
    float32 m_flBackgroundBorderWidth; // offset 0xE94, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xE98, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xE9C, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xEA0, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xEA4, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xEA8, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xEAC, size 0x4, align 4 | MNotSaved
};
