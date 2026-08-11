#pragma once

class CCitadel_Modifier_ColdFrontAOE : public CCitadelModifier /*0x0*/  // sizeof 0x3E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecDamagedTargets; // offset 0xD0, size 0x18, align 8
    char _pad_00E8[0x300]; // offset 0xE8
};
