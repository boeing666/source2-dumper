#pragma once

class CCitadel_Ability_ThrowSand : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vHitEnts; // offset 0x12D8, size 0x18, align 8
};
