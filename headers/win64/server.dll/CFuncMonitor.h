#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x870, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0x878, size 0x4, align 4
    bool m_bRenderShadows; // offset 0x87C, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0x87D, size 0x1, align 1
    char _pad_087E[0x2]; // offset 0x87E
    CUtlString m_brushModelName; // offset 0x880, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0x888, size 0x4, align 4
    bool m_bEnabled; // offset 0x88C, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0x88D, size 0x1, align 1
    bool m_bStartEnabled; // offset 0x88E, size 0x1, align 1
    char _pad_088F[0x1]; // offset 0x88F
};
