#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x7A0]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x7A0, size 0x8, align 8 | MNetworkEnable
    int32 m_nResolutionEnum; // offset 0x7A8, size 0x4, align 4 | MNetworkEnable
    bool m_bRenderShadows; // offset 0x7AC, size 0x1, align 1 | MNetworkEnable
    bool m_bUseUniqueColorTarget; // offset 0x7AD, size 0x1, align 1 | MNetworkEnable
    char _pad_07AE[0x2]; // offset 0x7AE
    CUtlString m_brushModelName; // offset 0x7B0, size 0x8, align 8 | MNetworkEnable
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0x7B8, size 0x4, align 4 | MNetworkEnable
    bool m_bEnabled; // offset 0x7BC, size 0x1, align 1 | MNetworkEnable
    bool m_bDraw3DSkybox; // offset 0x7BD, size 0x1, align 1 | MNetworkEnable
    bool m_bStartEnabled; // offset 0x7BE, size 0x1, align 1
    char _pad_07BF[0x1]; // offset 0x7BF
};
