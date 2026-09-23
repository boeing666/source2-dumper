#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0x1510, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x1098, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0x10A0, size 0x4, align 4
    bool m_bRenderShadows; // offset 0x10A4, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0x10A5, size 0x1, align 1
    char _pad_10A6[0x2]; // offset 0x10A6
    CUtlString m_brushModelName; // offset 0x10A8, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0x10B0, size 0x4, align 4
    bool m_bEnabled; // offset 0x10B4, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0x10B5, size 0x1, align 1
    char _pad_10B6[0x45A]; // offset 0x10B6
};
