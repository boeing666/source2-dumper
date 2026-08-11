#pragma once

class CCitadel_Ability_Ghost_BloodShards : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1308, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x12F0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecDamagedTargets; // offset 0x12F0, size 0x18, align 8
};
