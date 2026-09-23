#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0x1370, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0x10A0, size 0x1, align 1 | MNotSaved
    char _pad_10A1[0x17]; // offset 0x10A1
    int32 m_nTextWidthPx; // offset 0x10B8, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0x10BC, size 0x4, align 4
    char[512] m_messageText; // offset 0x10C0, size 0x200, align 1
    char[64] m_FontName; // offset 0x12C0, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0x1300, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x1340, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0x1341, size 0x1, align 1 | MNotSaved
    char _pad_1342[0x2]; // offset 0x1342
    float32 m_flWorldUnitsPerPx; // offset 0x1344, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0x1348, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0x134C, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0x1350, size 0x1, align 1 | MNotSaved
    char _pad_1351[0x3]; // offset 0x1351
    float32 m_flBackgroundBorderWidth; // offset 0x1354, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0x1358, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0x135C, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0x1360, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0x1364, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0x1368, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0x136C, size 0x4, align 4 | MNotSaved
};
