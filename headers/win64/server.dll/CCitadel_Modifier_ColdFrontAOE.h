#pragma once

class CCitadel_Modifier_ColdFrontAOE : public CCitadelModifier /*0x0*/  // sizeof 0x588, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecDamagedTargets; // offset 0x150, size 0x18, align 8
    char _pad_0168[0x420]; // offset 0x168
};
