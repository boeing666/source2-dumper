#pragma once

class C_DOTA_Ability_Windrunner_Shackleshot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 shackle_count; // offset 0x824, size 0x4, align 4
    VectorWS m_vArrowAvgPos; // offset 0x828, size 0xC, align 4
    VectorWS m_vArrowStartPos; // offset 0x834, size 0xC, align 4
    VectorWS m_vArrowStartPos2; // offset 0x840, size 0xC, align 4
    VectorWS m_vArrowStartPos3; // offset 0x84C, size 0xC, align 4
    CHandle< C_BaseEntity > m_hTarget; // offset 0x858, size 0x4, align 4
    char _pad_085C[0x4]; // offset 0x85C
};
