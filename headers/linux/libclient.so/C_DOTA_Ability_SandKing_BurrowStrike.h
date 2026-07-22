#pragma once

class C_DOTA_Ability_SandKing_BurrowStrike : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    float32 burrow_width; // offset 0x824, size 0x4, align 4
    int32 burrow_speed; // offset 0x828, size 0x4, align 4
    float32 burrow_anim_time; // offset 0x82C, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x830, size 0x1, align 1
    char _pad_0831[0x3]; // offset 0x831
    VectorWS m_vEndpoint; // offset 0x834, size 0xC, align 4
};
