#pragma once

class CCitadel_Modifier_TechBurst_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x4B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x208]; // offset 0x0
    CHandle< CBaseEntity > m_hProcAbility; // offset 0x208, size 0x4, align 4
    char _pad_020C[0x4]; // offset 0x20C
    CUtlVector< CHandle< CBaseEntity > > m_hitTargets; // offset 0x210, size 0x18, align 8
    char _pad_0228[0x288]; // offset 0x228
};
