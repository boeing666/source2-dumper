#pragma once

class CCitadel_Modifier_NullificationAuraAOE : public CCitadelModifier /*0x0*/  // sizeof 0x4C8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< CBaseEntity* > m_vecDamagedTargets; // offset 0x140, size 0x18, align 8
    char _pad_0158[0x370]; // offset 0x158
};
