#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFE8]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0xFE8, size 0x1, align 1 | MNotSaved
    char _pad_0FE9[0x177]; // offset 0xFE9
    bool m_bIgnoreInput; // offset 0x1160, size 0x1, align 1
    char _pad_1161[0x3]; // offset 0x1161
    float32 m_flWidth; // offset 0x1164, size 0x4, align 4
    float32 m_flHeight; // offset 0x1168, size 0x4, align 4
    float32 m_flDPI; // offset 0x116C, size 0x4, align 4
    float32 m_flInteractDistance; // offset 0x1170, size 0x4, align 4
    float32 m_flDepthOffset; // offset 0x1174, size 0x4, align 4
    uint32 m_unOwnerContext; // offset 0x1178, size 0x4, align 4
    uint32 m_unHorizontalAlign; // offset 0x117C, size 0x4, align 4
    uint32 m_unVerticalAlign; // offset 0x1180, size 0x4, align 4
    uint32 m_unOrientation; // offset 0x1184, size 0x4, align 4
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0x1188, size 0x1, align 1
    char _pad_1189[0x7]; // offset 0x1189
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0x1190, size 0x18, align 8
};
