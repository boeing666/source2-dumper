#pragma once

class CDOTA_Aghsfort_Ability_Creature_Magnus_Push_Skewer : public CDOTABaseAbility /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 skewer_radius; // offset 0x85C, size 0x4, align 4
    float32 skewer_speed; // offset 0x860, size 0x4, align 4
    float32 range; // offset 0x864, size 0x4, align 4
    int32 tree_radius; // offset 0x868, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x86C, size 0x4, align 4
};
