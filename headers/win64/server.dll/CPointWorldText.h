#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    char[512] m_messageText; // offset 0x8B8, size 0x200, align 1
    char[64] m_FontName; // offset 0xAB8, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xAF8, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xB38, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xB39, size 0x1, align 1 | MNotSaved
    char _pad_0B3A[0x2]; // offset 0xB3A
    float32 m_flWorldUnitsPerPx; // offset 0xB3C, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xB40, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xB44, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xB48, size 0x1, align 1 | MNotSaved
    char _pad_0B49[0x3]; // offset 0xB49
    float32 m_flBackgroundBorderWidth; // offset 0xB4C, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xB50, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xB54, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xB58, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xB5C, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xB60, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xB64, size 0x4, align 4 | MNotSaved
};
