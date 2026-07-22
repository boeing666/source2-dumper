#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xC80, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAC0]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xAC0, size 0x1, align 1 | MNotSaved
    char _pad_0AC1[0x177]; // offset 0xAC1
    bool m_bIgnoreInput; // offset 0xC38, size 0x1, align 1
    char _pad_0C39[0x3]; // offset 0xC39
    float32 m_flWidth; // offset 0xC3C, size 0x4, align 4
    float32 m_flHeight; // offset 0xC40, size 0x4, align 4
    float32 m_flDPI; // offset 0xC44, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0xC48, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0xC4C, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0xC50, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0xC54, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0xC58, size 0x4, align 4
    uint32 m_unOrientation; // offset 0xC5C, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xC60, size 0x1, align 1
    char _pad_0C61[0x7]; // offset 0xC61
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xC68, size 0x18, align 8
};
