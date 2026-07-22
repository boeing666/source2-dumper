#pragma once

class CDOTA_Ability_EarthSpirit_BoulderSmash : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 speed; // offset 0x85C, size 0x4, align 4
    float32 rock_damage; // offset 0x860, size 0x4, align 4
    float32 creep_multiplier; // offset 0x864, size 0x4, align 4
    float32 radius; // offset 0x868, size 0x4, align 4
    float32 rock_search_aoe; // offset 0x86C, size 0x4, align 4
    float32 unit_distance; // offset 0x870, size 0x4, align 4
    float32 rock_distance; // offset 0x874, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x878, size 0x4, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x87C, size 0x4, align 4
    bool m_bUsedStone; // offset 0x880, size 0x1, align 1
    char _pad_0881[0x3]; // offset 0x881
    CHandle< CBaseEntity > m_hTarget; // offset 0x884, size 0x4, align 4
    bool m_bTargetStone; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x7]; // offset 0x889
};
