#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1130, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xF70, size 0x1, align 1 | MNotSaved
    char _pad_0F71[0x177]; // offset 0xF71
    bool m_bIgnoreInput; // offset 0x10E8, size 0x1, align 1
    char _pad_10E9[0x3]; // offset 0x10E9
    float32 m_flWidth; // offset 0x10EC, size 0x4, align 4
    float32 m_flHeight; // offset 0x10F0, size 0x4, align 4
    float32 m_flDPI; // offset 0x10F4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x10F8, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x10FC, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x1100, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x1104, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x1108, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x110C, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x1110, size 0x1, align 1
    char _pad_1111[0x7]; // offset 0x1111
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x1118, size 0x18, align 8
};
