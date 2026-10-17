#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xEF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD38]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xD38, size 0x1, align 1 | MNotSaved
    char _pad_0D39[0x16F]; // offset 0xD39
    bool m_bIgnoreInput; // offset 0xEA8, size 0x1, align 1
    char _pad_0EA9[0x3]; // offset 0xEA9
    float32 m_flWidth; // offset 0xEAC, size 0x4, align 4
    float32 m_flHeight; // offset 0xEB0, size 0x4, align 4
    float32 m_flDPI; // offset 0xEB4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xEB8, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xEBC, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xEC0, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xEC4, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xEC8, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xECC, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xED0, size 0x1, align 1
    char _pad_0ED1[0x7]; // offset 0xED1
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xED8, size 0x18, align 8
};
