#pragma once

class CDOTA_Ability_SandKing_BurrowStrike : public CDOTABaseAbility /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 burrow_width; // offset 0x85C, size 0x4, align 4
    int32 burrow_speed; // offset 0x860, size 0x4, align 4
    float32 burrow_anim_time; // offset 0x864, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x868, size 0x1, align 1
    char _pad_0869[0x3]; // offset 0x869
    VectorWS m_vEndpoint; // offset 0x86C, size 0xC, align 4
};
