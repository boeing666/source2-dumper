#pragma once

class CCitadel_Ability_Swan_FeatherBoomerang : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1400, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitTargetList; // offset 0x11D8, size 0x18, align 8
    char _pad_11F0[0x210]; // offset 0x11F0
};
