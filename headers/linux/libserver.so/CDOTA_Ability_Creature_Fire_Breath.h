#pragma once

class CDOTA_Ability_Creature_Fire_Breath : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    int32 speed; // offset 0x85C, size 0x4, align 4
    int32 projectile_count; // offset 0x860, size 0x4, align 4
    float32 rotation_angle; // offset 0x864, size 0x4, align 4
    float32 damage; // offset 0x868, size 0x4, align 4
    float32 radius; // offset 0x86C, size 0x4, align 4
    CountdownTimer ctTimer; // offset 0x870, size 0x18, align 8
    Vector m_vecStartRot; // offset 0x888, size 0xC, align 4
    Vector m_vecEndRot; // offset 0x894, size 0xC, align 4
};
