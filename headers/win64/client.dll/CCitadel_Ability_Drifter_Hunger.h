#pragma once

class CCitadel_Ability_Drifter_Hunger : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1F38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecCurrentTargets; // offset 0x16D8, size 0x18, align 8
    char _pad_16F0[0x4]; // offset 0x16F0
    CUtlStringToken m_TypeIDDarkness; // offset 0x16F4, size 0x4, align 4
    char _pad_16F8[0x840]; // offset 0x16F8
};
