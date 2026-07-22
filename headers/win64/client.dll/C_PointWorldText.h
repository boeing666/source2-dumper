#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xA90, size 0x1, align 1 | MNotSaved
    char _pad_0A91[0x17]; // offset 0xA91
    int32 m_nTextWidthPx; // offset 0xAA8, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xAAC, size 0x4, align 4
    char[512] m_messageText; // offset 0xAB0, size 0x200, align 1
    char[64] m_FontName; // offset 0xCB0, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xCF0, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0xD30, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0xD31, size 0x1, align 1 | MNotSaved
    char _pad_0D32[0x2]; // offset 0xD32
    float32 m_flWorldUnitsPerPx; // offset 0xD34, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0xD38, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0xD3C, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0xD40, size 0x1, align 1 | MNotSaved
    char _pad_0D41[0x3]; // offset 0xD41
    float32 m_flBackgroundBorderWidth; // offset 0xD44, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xD48, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xD4C, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0xD50, size 0x4, align 1 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xD54, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xD58, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xD5C, size 0x4, align 4 | MNotSaved
};
