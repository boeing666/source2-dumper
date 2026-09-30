#pragma once

class C_NPC_SimpleAnimatingAI : public CBaseAnimGraph /*0x0*/  // sizeof 0xDB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA0]; // offset 0x0
    CHandle< C_BaseEntity > m_hEnemy; // offset 0xDA0, size 0x4, align 4
    CHandle< C_CitadelBaseAbility > m_hAbilityOwner; // offset 0xDA4, size 0x4, align 4
    char _pad_0DA8[0x10]; // offset 0xDA8
};
