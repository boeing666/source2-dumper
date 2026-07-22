#pragma once

class C_DOTA_Ability_Creature_Fire_Breath : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    int32 speed; // offset 0x6A8, size 0x4, align 4
    int32 projectile_count; // offset 0x6AC, size 0x4, align 4
    float32 rotation_angle; // offset 0x6B0, size 0x4, align 4
    float32 damage; // offset 0x6B4, size 0x4, align 4
    float32 radius; // offset 0x6B8, size 0x4, align 4
    char _pad_06BC[0x4]; // offset 0x6BC
    CountdownTimer ctTimer; // offset 0x6C0, size 0x18, align 8
    Vector m_vecStartRot; // offset 0x6D8, size 0xC, align 4
    Vector m_vecEndRot; // offset 0x6E4, size 0xC, align 4
};
