#pragma once

class C_DOTA_Ability_Rubick_SpellSteal : public C_DOTABaseAbility /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    char[256] m_ActivityModifier; // offset 0x6A8, size 0x100, align 1
    float32 m_fStolenCastPoint; // offset 0x7A8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStealTarget; // offset 0x7AC, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hStealAbility; // offset 0x7B0, size 0x4, align 4
    char _pad_07B4[0x4]; // offset 0x7B4
};
