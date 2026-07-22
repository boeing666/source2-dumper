#pragma once

class CCitadel_Ability_Ghost_BloodShards : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1558]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecDamagedTargets; // offset 0x1558, size 0x18, align 8
};
