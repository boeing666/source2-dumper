#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    char[512] m_messageText; // offset 0x878, size 0x200, align 1
    char[64] m_FontName; // offset 0xA78, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xAB8, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xAF8, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xAF9, size 0x1, align 1 | MNotSaved
    char _pad_0AFA[0x2]; // offset 0xAFA
    float32 m_flWorldUnitsPerPx; // offset 0xAFC, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xB00, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xB04, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xB08, size 0x1, align 1 | MNotSaved
    char _pad_0B09[0x3]; // offset 0xB09
    float32 m_flBackgroundBorderWidth; // offset 0xB0C, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xB10, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xB14, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xB18, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xB1C, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xB20, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xB24, size 0x4, align 4 | MNotSaved
};
