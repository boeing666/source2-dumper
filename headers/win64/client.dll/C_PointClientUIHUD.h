#pragma once

class C_PointClientUIHUD : public C_BaseClientUIEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9E0]; // offset 0x0
    bool m_bCheckCSSClasses; // offset 0x9E0, size 0x1, align 1 | MNotSaved
    char _pad_09E1[0x177]; // offset 0x9E1
    bool m_bIgnoreInput; // offset 0xB58, size 0x1, align 1 | MNetworkEnable
    char _pad_0B59[0x3]; // offset 0xB59
    float32 m_flWidth; // offset 0xB5C, size 0x4, align 4 | MNetworkEnable
    float32 m_flHeight; // offset 0xB60, size 0x4, align 4 | MNetworkEnable
    float32 m_flDPI; // offset 0xB64, size 0x4, align 4 | MNetworkEnable
    float32 m_flInteractDistance; // offset 0xB68, size 0x4, align 4 | MNetworkEnable
    float32 m_flDepthOffset; // offset 0xB6C, size 0x4, align 4 | MNetworkEnable
    uint32 m_unOwnerContext; // offset 0xB70, size 0x4, align 4 | MNetworkEnable
    uint32 m_unHorizontalAlign; // offset 0xB74, size 0x4, align 4 | MNetworkEnable
    uint32 m_unVerticalAlign; // offset 0xB78, size 0x4, align 4 | MNetworkEnable
    uint32 m_unOrientation; // offset 0xB7C, size 0x4, align 4 | MNetworkEnable
    bool m_bAllowInteractionFromAllSceneWorlds; // offset 0xB80, size 0x1, align 1 | MNetworkEnable
    char _pad_0B81[0x7]; // offset 0xB81
    C_NetworkUtlVectorBase< CUtlSymbolLarge > m_vecCSSClasses; // offset 0xB88, size 0x18, align 8 | MNetworkEnable
};
