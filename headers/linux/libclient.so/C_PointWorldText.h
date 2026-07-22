#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0x1210, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF40]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0xF40, size 0x1, align 1 | MNotSaved
    char _pad_0F41[0x17]; // offset 0xF41
    int32 m_nTextWidthPx; // offset 0xF58, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0xF5C, size 0x4, align 4
    char[512] m_messageText; // offset 0xF60, size 0x200, align 1
    char[64] m_FontName; // offset 0x1160, size 0x40, align 1 | MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0x11A0, size 0x40, align 1 | MNotSaved
    bool m_bEnabled; // offset 0x11E0, size 0x1, align 1 | MNotSaved
    bool m_bFullbright; // offset 0x11E1, size 0x1, align 1 | MNotSaved
    char _pad_11E2[0x2]; // offset 0x11E2
    float32 m_flWorldUnitsPerPx; // offset 0x11E4, size 0x4, align 4 | MNotSaved
    float32 m_flFontSize; // offset 0x11E8, size 0x4, align 4 | MNotSaved
    float32 m_flDepthOffset; // offset 0x11EC, size 0x4, align 4 | MNotSaved
    bool m_bDrawBackground; // offset 0x11F0, size 0x1, align 1 | MNotSaved
    char _pad_11F1[0x3]; // offset 0x11F1
    float32 m_flBackgroundBorderWidth; // offset 0x11F4, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0x11F8, size 0x4, align 4 | MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0x11FC, size 0x4, align 4 | MNotSaved
    Color m_Color; // offset 0x1200, size 0x4, align 1 | MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0x1204, size 0x4, align 4 | MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0x1208, size 0x4, align 4 | MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0x120C, size 0x4, align 4 | MNotSaved
};
