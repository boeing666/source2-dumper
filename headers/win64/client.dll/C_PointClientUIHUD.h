#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xD70, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xBB0, size 0x1, align 1 | MNotSaved
    char _pad_0BB1[0x177]; // offset 0xBB1
    bool m_bIgnoreInput; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x3]; // offset 0xD29
    float32 m_flWidth; // offset 0xD2C, size 0x4, align 4
    float32 m_flHeight; // offset 0xD30, size 0x4, align 4
    float32 m_flDPI; // offset 0xD34, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xD38, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xD3C, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xD40, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xD44, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xD48, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xD4C, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xD50, size 0x1, align 1
    char _pad_0D51[0x7]; // offset 0xD51
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xD58, size 0x18, align 8
};
