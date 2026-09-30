#pragma once

class CNPC_SimpleAnimatingAI : public CBaseAnimGraph /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAA0]; // offset 0x0
    CHandle< CBaseEntity > m_hEnemy; // offset 0xAA0, size 0x4, align 4
    CHandle< CCitadelBaseAbility > m_hAbilityOwner; // offset 0xAA4, size 0x4, align 4
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0xAA8, size 0x160, align 255
    char _pad_0C08[0x8]; // offset 0xC08
};
