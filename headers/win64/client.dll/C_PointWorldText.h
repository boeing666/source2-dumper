#pragma once

class C_PointWorldText : public C_ModelPointEntity /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    bool m_bForceRecreateNextUpdate; // offset 0x9B0, size 0x1, align 1 | MNotSaved
    char _pad_09B1[0x17]; // offset 0x9B1
    int32 m_nTextWidthPx; // offset 0x9C8, size 0x4, align 4
    int32 m_nTextHeightPx; // offset 0x9CC, size 0x4, align 4
    char[512] m_messageText; // offset 0x9D0, size 0x200, align 1 | MNetworkEnable MNotSaved
    char[64] m_FontName; // offset 0xBD0, size 0x40, align 1 | MNetworkEnable MNotSaved
    char[64] m_BackgroundMaterialName; // offset 0xC10, size 0x40, align 1 | MNetworkEnable MNotSaved
    bool m_bEnabled; // offset 0xC50, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bFullbright; // offset 0xC51, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C52[0x2]; // offset 0xC52
    float32 m_flWorldUnitsPerPx; // offset 0xC54, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flFontSize; // offset 0xC58, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flDepthOffset; // offset 0xC5C, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bDrawBackground; // offset 0xC60, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C61[0x3]; // offset 0xC61
    float32 m_flBackgroundBorderWidth; // offset 0xC64, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flBackgroundBorderHeight; // offset 0xC68, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flBackgroundWorldToUV; // offset 0xC6C, size 0x4, align 4 | MNetworkEnable MNotSaved
    Color m_Color; // offset 0xC70, size 0x4, align 1 | MNetworkEnable MNotSaved
    PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // offset 0xC74, size 0x4, align 4 | MNetworkEnable MNotSaved
    PointWorldTextJustifyVertical_t m_nJustifyVertical; // offset 0xC78, size 0x4, align 4 | MNetworkEnable MNotSaved
    PointWorldTextReorientMode_t m_nReorientMode; // offset 0xC7C, size 0x4, align 4 | MNetworkEnable MNotSaved
};
