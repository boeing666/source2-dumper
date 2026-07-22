#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    char[512] m_messageText; // offset 0xA54, size 0x200, align 1
    char[64] m_FontName; // offset 0xC54, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xC94, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xCD4, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xCD5, size 0x1, align 1 | MNotSaved
    char _pad_0CD6[0x2]; // offset 0xCD6
    float32 m_flWorldUnitsPerPx; // offset 0xCD8, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xCDC, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xCE0, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xCE4, size 0x1, align 1 | MNotSaved
    char _pad_0CE5[0x3]; // offset 0xCE5
    float32 m_flBackgroundBorderWidth; // offset 0xCE8, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xCEC, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xCF0, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xCF4, size 0x4, align 1 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xCF8, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xCFC, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xD00, size 0x4, align 4 | MNotSaved
    char _pad_0D04[0x4]; // offset 0xD04
};
