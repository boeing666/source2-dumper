#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xE88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xBB8, size 0x1, align 1 | MNotSaved
    char _pad_0BB9[0x17]; // offset 0xBB9
    int32 m_nTextWidthPx; // offset 0xBD0, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xBD4, size 0x4, align 4
    char[512] m_messageText; // offset 0xBD8, size 0x200, align 1
    char[64] m_FontName; // offset 0xDD8, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xE18, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xE58, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xE59, size 0x1, align 1 | MNotSaved
    char _pad_0E5A[0x2]; // offset 0xE5A
    float32 m_flWorldUnitsPerPx; // offset 0xE5C, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xE60, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xE64, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xE68, size 0x1, align 1 | MNotSaved
    char _pad_0E69[0x3]; // offset 0xE69
    float32 m_flBackgroundBorderWidth; // offset 0xE6C, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xE70, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xE74, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xE78, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xE7C, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xE80, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xE84, size 0x4, align 4 | MNotSaved
};
