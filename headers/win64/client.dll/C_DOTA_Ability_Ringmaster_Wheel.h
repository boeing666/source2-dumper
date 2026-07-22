#pragma once

class C_DOTA_Ability_Ringmaster_Wheel : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x6A8, size 0xC, align 4
    int32 min_range; // offset 0x6B4, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x6B8, size 0x4, align 4
    float32 knockback_radius; // offset 0x6BC, size 0x4, align 4
};
