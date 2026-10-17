#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xFD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD08]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xD08, size 0x1, align 1 | MNotSaved
    char _pad_0D09[0x17]; // offset 0xD09
    int32 m_nTextWidthPx; // offset 0xD20, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xD24, size 0x4, align 4
    char[512] m_messageText; // offset 0xD28, size 0x200, align 1
    char[64] m_FontName; // offset 0xF28, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xF68, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xFA8, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xFA9, size 0x1, align 1 | MNotSaved
    char _pad_0FAA[0x2]; // offset 0xFAA
    float32 m_flWorldUnitsPerPx; // offset 0xFAC, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xFB0, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xFB4, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xFB8, size 0x1, align 1 | MNotSaved
    char _pad_0FB9[0x3]; // offset 0xFB9
    float32 m_flBackgroundBorderWidth; // offset 0xFBC, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xFC0, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xFC8, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xFCC, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xFD0, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xFD4, size 0x4, align 4 | MNotSaved
};
