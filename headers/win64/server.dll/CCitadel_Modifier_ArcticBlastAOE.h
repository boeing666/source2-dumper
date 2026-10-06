#pragma once

class CCitadel_Modifier_ArcticBlastAOE : public CCitadelModifier /*0x0*/  // sizeof 0x6E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecDamagedTargets; // offset 0x148, size 0x18, align 8
    char _pad_0160[0x580]; // offset 0x160
};
