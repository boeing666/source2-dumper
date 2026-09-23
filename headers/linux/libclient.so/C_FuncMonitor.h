#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0x14A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CUtlString m_targetCamera; // offset 0x1020, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0x1028, size 0x4, align 4
    bool m_bRenderShadows; // offset 0x102C, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0x102D, size 0x1, align 1
    char _pad_102E[0x2]; // offset 0x102E
    CUtlString m_brushModelName; // offset 0x1030, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0x1038, size 0x4, align 4
    bool m_bEnabled; // offset 0x103C, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0x103D, size 0x1, align 1
    char _pad_103E[0x462]; // offset 0x103E
};
