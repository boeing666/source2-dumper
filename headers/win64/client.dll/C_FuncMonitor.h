#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0xE20, align 0x10 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x9A8, size 0x8, align 8 | MNetworkEnable
    int32 m_nResolutionEnum; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable
    bool m_bRenderShadows; // offset 0x9B4, size 0x1, align 1 | MNetworkEnable
    bool m_bUseUniqueColorTarget; // offset 0x9B5, size 0x1, align 1 | MNetworkEnable
    char _pad_09B6[0x2]; // offset 0x9B6
    CUtlString m_brushModelName; // offset 0x9B8, size 0x8, align 8 | MNetworkEnable
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0x9C0, size 0x4, align 4 | MNetworkEnable
    bool m_bEnabled; // offset 0x9C4, size 0x1, align 1 | MNetworkEnable
    bool m_bDraw3DSkybox; // offset 0x9C5, size 0x1, align 1 | MNetworkEnable
    char _pad_09C6[0x45A]; // offset 0x9C6
};
