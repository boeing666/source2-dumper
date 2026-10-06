#pragma once

class CCitadel_Modifier_UltimateBurst_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x6B8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2E0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hHitTargets; // offset 0x2E0, size 0x18, align 8
    char _pad_02F8[0x3C0]; // offset 0x2F8
};
