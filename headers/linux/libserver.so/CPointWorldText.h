#pragma once

class CPointWorldText : public CModelPointEntity /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    char[512] m_messageText; // offset 0xB2C, size 0x200, align 1
    char[64] m_FontName; // offset 0xD2C, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xD6C, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xDAC, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xDAD, size 0x1, align 1 | MNotSaved
    char _pad_0DAE[0x2]; // offset 0xDAE
    float32 m_flWorldUnitsPerPx; // offset 0xDB0, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xDB4, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xDB8, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xDBC, size 0x1, align 1 | MNotSaved
    char _pad_0DBD[0x3]; // offset 0xDBD
    float32 m_flBackgroundBorderWidth; // offset 0xDC0, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xDC4, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xDC8, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xDCC, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xDD0, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xDD4, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xDD8, size 0x4, align 4 | MNotSaved
    char _pad_0DDC[0x4]; // offset 0xDDC
};
