#pragma once

class CCitadel_Ability_Wrecker_Salvage : public CCitadelBaseAbility /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecTargets; // offset 0x14A0, size 0x18, align 8
    char _pad_14B8[0x420]; // offset 0x14B8
};
