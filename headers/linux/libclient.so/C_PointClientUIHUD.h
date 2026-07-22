#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xE00, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC48]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xC48, size 0x1, align 1 | MNotSaved
    char _pad_0C49[0x16F]; // offset 0xC49
    bool m_bIgnoreInput; // offset 0xDB8, size 0x1, align 1
    char _pad_0DB9[0x3]; // offset 0xDB9
    float32 m_flWidth; // offset 0xDBC, size 0x4, align 4
    float32 m_flHeight; // offset 0xDC0, size 0x4, align 4
    float32 m_flDPI; // offset 0xDC4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xDC8, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xDCC, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xDD0, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xDD4, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xDD8, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xDDC, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xDE0, size 0x1, align 1
    char _pad_0DE1[0x7]; // offset 0xDE1
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xDE8, size 0x18, align 8
};
