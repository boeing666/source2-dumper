#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0x12F8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1028]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0x1028, size 0x1, align 1 | MNotSaved
    char _pad_1029[0x17]; // offset 0x1029
    int32 m_nTextWidthPx; // offset 0x1040, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0x1044, size 0x4, align 4
    char[512] m_messageText; // offset 0x1048, size 0x200, align 1
    char[64] m_FontName; // offset 0x1248, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0x1288, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x12C8, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0x12C9, size 0x1, align 1 | MNotSaved
    char _pad_12CA[0x2]; // offset 0x12CA
    float32 m_flWorldUnitsPerPx; // offset 0x12CC, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0x12D0, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0x12D4, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0x12D8, size 0x1, align 1 | MNotSaved
    char _pad_12D9[0x3]; // offset 0x12D9
    float32 m_flBackgroundBorderWidth; // offset 0x12DC, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0x12E0, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0x12E4, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0x12E8, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0x12EC, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0x12F0, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0x12F4, size 0x4, align 4 | MNotSaved
};
