#pragma once

class C_DOTA_Ability_Ringmaster_Wheel : public C_DOTABaseAbility /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x824, size 0xC, align 4
    int32 min_range; // offset 0x830, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x834, size 0x4, align 4
    float32 knockback_radius; // offset 0x838, size 0x4, align 4
    char _pad_083C[0x4]; // offset 0x83C
};
