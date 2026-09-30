#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xDA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBE8]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xBE8, size 0x1, align 1 | MNotSaved
    char _pad_0BE9[0x177]; // offset 0xBE9
    bool m_bIgnoreInput; // offset 0xD60, size 0x1, align 1
    char _pad_0D61[0x3]; // offset 0xD61
    float32 m_flWidth; // offset 0xD64, size 0x4, align 4
    float32 m_flHeight; // offset 0xD68, size 0x4, align 4
    float32 m_flDPI; // offset 0xD6C, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xD70, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xD74, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xD78, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xD7C, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xD80, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xD84, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xD88, size 0x1, align 1
    char _pad_0D89[0x7]; // offset 0xD89
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xD90, size 0x18, align 8
};
