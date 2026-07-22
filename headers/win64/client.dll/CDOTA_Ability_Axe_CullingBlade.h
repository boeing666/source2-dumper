#pragma once

class CDOTA_Ability_Axe_CullingBlade : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    bool m_bInterrupted; // offset 0x6A8, size 0x1, align 1
    char _pad_06A9[0x3]; // offset 0x6A9
    VectorWS m_vProjectileLocation; // offset 0x6AC, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
};
