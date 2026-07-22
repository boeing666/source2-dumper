#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x790, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0x798, size 0x4, align 4
    bool m_bRenderShadows; // offset 0x79C, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0x79D, size 0x1, align 1
    char _pad_079E[0x2]; // offset 0x79E
    CUtlString m_brushModelName; // offset 0x7A0, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0x7A8, size 0x4, align 4
    bool m_bEnabled; // offset 0x7AC, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0x7AD, size 0x1, align 1
    bool m_bStartEnabled; // offset 0x7AE, size 0x1, align 1
    char _pad_07AF[0x1]; // offset 0x7AF
};
