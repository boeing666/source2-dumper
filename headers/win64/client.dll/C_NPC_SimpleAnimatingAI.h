#pragma once

class C_NPC_SimpleAnimatingAI : public CBaseAnimGraph /*0x0*/  // sizeof 0xE10, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hEnemy; // offset 0xDF8, size 0x4, align 4
    CHandle< C_CitadelBaseAbility > m_hAbilityOwner; // offset 0xDFC, size 0x4, align 4
    char _pad_0E00[0x10]; // offset 0xE00
};
