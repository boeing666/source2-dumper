#pragma once

class C_DOTA_Ability_Creature_Fire_Breath : public C_DOTABaseAbility /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    int32 speed; // offset 0x824, size 0x4, align 4
    int32 projectile_count; // offset 0x828, size 0x4, align 4
    float32 rotation_angle; // offset 0x82C, size 0x4, align 4
    float32 damage; // offset 0x830, size 0x4, align 4
    float32 radius; // offset 0x834, size 0x4, align 4
    CountdownTimer ctTimer; // offset 0x838, size 0x18, align 8
    Vector m_vecStartRot; // offset 0x850, size 0xC, align 4
    Vector m_vecEndRot; // offset 0x85C, size 0xC, align 4
};
