#pragma once

class CDOTA_Ability_Creature_Fire_Breath : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    int32 speed; // offset 0x580, size 0x4, align 4
    int32 projectile_count; // offset 0x584, size 0x4, align 4
    float32 rotation_angle; // offset 0x588, size 0x4, align 4
    float32 damage; // offset 0x58C, size 0x4, align 4
    float32 radius; // offset 0x590, size 0x4, align 4
    char _pad_0594[0x4]; // offset 0x594
    CountdownTimer ctTimer; // offset 0x598, size 0x18, align 8
    Vector m_vecStartRot; // offset 0x5B0, size 0xC, align 4
    Vector m_vecEndRot; // offset 0x5BC, size 0xC, align 4
};
