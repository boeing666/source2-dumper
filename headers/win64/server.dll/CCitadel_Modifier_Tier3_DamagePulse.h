#pragma once

class CCitadel_Modifier_Tier3_DamagePulse : public CCitadel_Modifier_Tier3Boss_Base /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vTargets; // offset 0xD0, size 0x18, align 8
};
