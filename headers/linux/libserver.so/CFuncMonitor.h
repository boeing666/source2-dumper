#pragma once

class CFuncMonitor : public CFuncBrush /*0x0*/  // sizeof 0xB68, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB48]; // offset 0x0
    CUtlString m_targetCamera; // offset 0xB48, size 0x8, align 8
    int32 m_nResolutionEnum; // offset 0xB50, size 0x4, align 4
    bool m_bRenderShadows; // offset 0xB54, size 0x1, align 1
    bool m_bUseUniqueColorTarget; // offset 0xB55, size 0x1, align 1
    char _pad_0B56[0x2]; // offset 0xB56
    CUtlString m_brushModelName; // offset 0xB58, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetCamera; // offset 0xB60, size 0x4, align 4
    bool m_bEnabled; // offset 0xB64, size 0x1, align 1
    bool m_bDraw3DSkybox; // offset 0xB65, size 0x1, align 1
    bool m_bStartEnabled; // offset 0xB66, size 0x1, align 1
    char _pad_0B67[0x1]; // offset 0xB67
};
