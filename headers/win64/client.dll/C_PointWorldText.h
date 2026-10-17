#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xE50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xB80, size 0x1, align 1 | MNotSaved
    char _pad_0B81[0x17]; // offset 0xB81
    int32 m_nTextWidthPx; // offset 0xB98, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xB9C, size 0x4, align 4
    char[512] m_messageText; // offset 0xBA0, size 0x200, align 1
    char[64] m_FontName; // offset 0xDA0, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xDE0, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xE20, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xE21, size 0x1, align 1 | MNotSaved
    char _pad_0E22[0x2]; // offset 0xE22
    float32 m_flWorldUnitsPerPx; // offset 0xE24, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xE28, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xE2C, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xE30, size 0x1, align 1 | MNotSaved
    char _pad_0E31[0x3]; // offset 0xE31
    float32 m_flBackgroundBorderWidth; // offset 0xE34, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xE38, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xE3C, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xE40, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xE44, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xE48, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xE4C, size 0x4, align 4 | MNotSaved
};
