#pragma once

class CDOTA_Ability_Axe_CullingBlade : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    bool m_bInterrupted; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    VectorWS m_vProjectileLocation; // offset 0x82C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
