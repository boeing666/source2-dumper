#pragma once

class CCitadel_Modifier_TechBurst_Proc : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x670, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    CHandle< CBaseEntity > m_hProcAbility; // offset 0x2D8, size 0x4, align 4
    char _pad_02DC[0x4]; // offset 0x2DC
    CUtlVector< CHandle< CBaseEntity > > m_hitTargets; // offset 0x2E0, size 0x18, align 8
    char _pad_02F8[0x378]; // offset 0x2F8
};
