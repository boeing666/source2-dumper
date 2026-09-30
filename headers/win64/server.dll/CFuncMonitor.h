#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0x8B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x898]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x898, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0x8A0, size 0x4, align 4
    bool m_bRenderShadows; // offset 0x8A4, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0x8A5, size 0x1, align 1
    char _pad_08A6[0x2]; // offset 0x8A6
    CUtlString m_brushModelName; // offset 0x8A8, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0x8B0, size 0x4, align 4
    bool m_bEnabled; // offset 0x8B4, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0x8B5, size 0x1, align 1
    bool m_bStartEnabled; // offset 0x8B6, size 0x1, align 1
    char _pad_08B7[0x1]; // offset 0x8B7
};
