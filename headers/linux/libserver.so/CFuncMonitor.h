#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA68]; // offset 0x0
    CUtlString m_targetCamera; // offset 0xA68, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0xA70, size 0x4, align 4
    bool m_bRenderShadows; // offset 0xA74, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0xA75, size 0x1, align 1
    char _pad_0A76[0x2]; // offset 0xA76
    CUtlString m_brushModelName; // offset 0xA78, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0xA80, size 0x4, align 4
    bool m_bEnabled; // offset 0xA84, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0xA85, size 0x1, align 1
    bool m_bStartEnabled; // offset 0xA86, size 0x1, align 1
    char _pad_0A87[0x1]; // offset 0xA87
};
