#pragma once

class C_DOTA_Ability_SandKing_BurrowStrike : public C_DOTABaseAbility /*0x0*/  // sizeof 0x848, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 burrow_width; // offset 0x828, size 0x4, align 4
    int32 burrow_speed; // offset 0x82C, size 0x4, align 4
    float32 burrow_anim_time; // offset 0x830, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x834, size 0x1, align 1
    char _pad_0835[0x3]; // offset 0x835
    VectorWS m_vEndpoint; // offset 0x838, size 0xC, align 4
    char _pad_0844[0x4]; // offset 0x844
};
