#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x1210, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1058]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0x1058, size 0x1, align 1 | MNotSaved
    char _pad_1059[0x16F]; // offset 0x1059
    bool m_bIgnoreInput; // offset 0x11C8, size 0x1, align 1
    char _pad_11C9[0x3]; // offset 0x11C9
    float32 m_flWidth; // offset 0x11CC, size 0x4, align 4
    float32 m_flHeight; // offset 0x11D0, size 0x4, align 4
    float32 m_flDPI; // offset 0x11D4, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x11D8, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x11DC, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x11E0, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x11E4, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x11E8, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x11EC, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x11F0, size 0x1, align 1
    char _pad_11F1[0x7]; // offset 0x11F1
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x11F8, size 0x18, align 8
};
