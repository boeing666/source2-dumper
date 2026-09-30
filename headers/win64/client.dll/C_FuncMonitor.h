#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0x1030, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CUtlString m_targetCamera; // offset 0xBB0, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0xBB8, size 0x4, align 4
    bool m_bRenderShadows; // offset 0xBBC, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0xBBD, size 0x1, align 1
    char _pad_0BBE[0x2]; // offset 0xBBE
    CUtlString m_brushModelName; // offset 0xBC0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0xBC8, size 0x4, align 4
    bool m_bEnabled; // offset 0xBCC, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0xBCD, size 0x1, align 1
    char _pad_0BCE[0x462]; // offset 0xBCE
};
