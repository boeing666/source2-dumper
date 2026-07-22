#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0x1288, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB8]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xFB8, size 0x1, align 1 | MNotSaved
    char _pad_0FB9[0x17]; // offset 0xFB9
    int32 m_nTextWidthPx; // offset 0xFD0, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xFD4, size 0x4, align 4
    char[512] m_messageText; // offset 0xFD8, size 0x200, align 1
    char[64] m_FontName; // offset 0x11D8, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0x1218, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x1258, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0x1259, size 0x1, align 1 | MNotSaved
    char _pad_125A[0x2]; // offset 0x125A
    float32 m_flWorldUnitsPerPx; // offset 0x125C, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0x1260, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0x1264, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0x1268, size 0x1, align 1 | MNotSaved
    char _pad_1269[0x3]; // offset 0x1269
    float32 m_flBackgroundBorderWidth; // offset 0x126C, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0x1270, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0x1274, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0x1278, size 0x4, align 1 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0x127C, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0x1280, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0x1284, size 0x4, align 4 | MNotSaved
};
