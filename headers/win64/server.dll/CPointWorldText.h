#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xB00, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    char[512] m_messageText; // offset 0x850, size 0x200, align 1
    char[64] m_FontName; // offset 0xA50, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xA90, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xAD0, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xAD1, size 0x1, align 1 | MNotSaved
    char _pad_0AD2[0x2]; // offset 0xAD2
    float32 m_flWorldUnitsPerPx; // offset 0xAD4, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xAD8, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xADC, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xAE0, size 0x1, align 1 | MNotSaved
    char _pad_0AE1[0x3]; // offset 0xAE1
    float32 m_flBackgroundBorderWidth; // offset 0xAE4, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xAE8, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xAEC, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xAF0, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xAF4, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xAF8, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xAFC, size 0x4, align 4 | MNotSaved
};
