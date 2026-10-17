#pragma once

class C_DOTA_Unit_Tidehunter_Anchor : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1AC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1AB8, size 0x4, align 4
    VectorWS m_vProjectilePosition; // offset 0x1ABC, size 0xC, align 4
};
