#pragma once

class CDOTA_Ability_Axe_CullingBlade : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    bool m_bInterrupted; // offset 0x824, size 0x1, align 1
    char _pad_0825[0x3]; // offset 0x825
    VectorWS m_vProjectileLocation; // offset 0x828, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x834, size 0x4, align 4
};
