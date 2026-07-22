#pragma once

class C_FuncMonitor : public C_FuncBrush /*0x0*/  // sizeof 0x1430, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CUtlString m_targetCamera; // offset 0xFB0, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0xFB8, size 0x4, align 4
    bool m_bRenderShadows; // offset 0xFBC, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0xFBD, size 0x1, align 1
    char _pad_0FBE[0x2]; // offset 0xFBE
    CUtlString m_brushModelName; // offset 0xFC0, size 0x8, align 8
    CHandle< C_BaseEntity > m_hTargetCamera; // offset 0xFC8, size 0x4, align 4
    bool m_bEnabled; // offset 0xFCC, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0xFCD, size 0x1, align 1
    char _pad_0FCE[0x462]; // offset 0xFCE
};
