#pragma once

class C_DOTA_Ability_SandKing_BurrowStrike : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 burrow_width; // offset 0x6A8, size 0x4, align 4
    int32 burrow_speed; // offset 0x6AC, size 0x4, align 4
    float32 burrow_anim_time; // offset 0x6B0, size 0x4, align 4
    bool m_bIsVectorTargeted; // offset 0x6B4, size 0x1, align 1
    char _pad_06B5[0x3]; // offset 0x6B5
    VectorWS m_vEndpoint; // offset 0x6B8, size 0xC, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
};
