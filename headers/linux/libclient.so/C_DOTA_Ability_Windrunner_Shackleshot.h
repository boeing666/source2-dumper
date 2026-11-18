#pragma once

class C_DOTA_Ability_Windrunner_Shackleshot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    int32 shackle_count; // offset 0x828, size 0x4, align 4
    VectorWS m_vArrowAvgPos; // offset 0x82C, size 0xC, align 4
    VectorWS m_vArrowStartPos; // offset 0x838, size 0xC, align 4
    VectorWS m_vArrowStartPos2; // offset 0x844, size 0xC, align 4
    VectorWS m_vArrowStartPos3; // offset 0x850, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x85C, size 0x4, align 4
};
