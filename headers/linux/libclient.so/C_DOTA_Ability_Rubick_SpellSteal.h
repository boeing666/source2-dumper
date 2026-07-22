#pragma once

class C_DOTA_Ability_Rubick_SpellSteal : public C_DOTABaseAbility /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    char[256] m_ActivityModifier; // offset 0x824, size 0x100, align 1
    float32 m_fStolenCastPoint; // offset 0x924, size 0x4, align 4
    CHandle< C_BaseEntity > m_hStealTarget; // offset 0x928, size 0x4, align 4
    CHandle< C_DOTABaseAbility > m_hStealAbility; // offset 0x92C, size 0x4, align 4
};
