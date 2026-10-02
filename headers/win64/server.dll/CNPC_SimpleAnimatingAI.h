#pragma once

class CNPC_SimpleAnimatingAI : public CBaseAnimGraph /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    CHandle< CBaseEntity > m_hEnemy; // offset 0xAF0, size 0x4, align 4
    CHandle< CCitadelBaseAbility > m_hAbilityOwner; // offset 0xAF4, size 0x4, align 4
    CCitadelRegenComponent m_CCitadelRegenComponent; // offset 0xAF8, size 0x160, align 255
    char _pad_0C58[0x8]; // offset 0xC58
};
