#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0x13B0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CUtlString m_targetCamera; // offset 0xF38, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0xF40, size 0x4, align 4
    bool m_bRenderShadows; // offset 0xF44, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0xF45, size 0x1, align 1
    char _pad_0F46[0x2]; // offset 0xF46
    CUtlString m_brushModelName; // offset 0xF48, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0xF50, size 0x4, align 4
    bool m_bEnabled; // offset 0xF54, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0xF55, size 0x1, align 1
    char _pad_0F56[0x45A]; // offset 0xF56
};
