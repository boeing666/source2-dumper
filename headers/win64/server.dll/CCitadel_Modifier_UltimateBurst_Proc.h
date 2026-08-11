#pragma once

class CCitadel_Modifier_UltimateBurst_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x4F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0x208, size 0x18, align 8
    char _pad_0220[0x2D0]; // offset 0x220
};
