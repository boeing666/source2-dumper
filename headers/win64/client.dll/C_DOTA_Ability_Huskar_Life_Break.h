#pragma once

class C_DOTA_Ability_Huskar_Life_Break : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x6A8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6B4, size 0x4, align 4
    bool m_bInterrupted; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x7]; // offset 0x6B9
};
