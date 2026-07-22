#pragma once

class C_DOTA_Ability_Sniper_Assassinate : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6A8, size 0x4, align 4
    ParticleIndex_t m_iIndex; // offset 0x6AC, size 0x4, align 255
    float32 cooldown_reduction_on_kill; // offset 0x6B0, size 0x4, align 4
    char _pad_06B4[0x4]; // offset 0x6B4
};
