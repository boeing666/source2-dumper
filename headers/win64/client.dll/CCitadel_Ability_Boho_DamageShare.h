#pragma once

class CCitadel_Ability_Boho_DamageShare : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vecLinkedEnemies; // offset 0x16D8, size 0x18, align 8
    char _pad_16F0[0x160]; // offset 0x16F0
};
