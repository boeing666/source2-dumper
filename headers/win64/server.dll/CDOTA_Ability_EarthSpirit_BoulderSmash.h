#pragma once

class CDOTA_Ability_EarthSpirit_BoulderSmash : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 speed; // offset 0x580, size 0x4, align 4
    float32 rock_damage; // offset 0x584, size 0x4, align 4
    float32 creep_multiplier; // offset 0x588, size 0x4, align 4
    float32 radius; // offset 0x58C, size 0x4, align 4
    float32 rock_search_aoe; // offset 0x590, size 0x4, align 4
    float32 unit_distance; // offset 0x594, size 0x4, align 4
    float32 rock_distance; // offset 0x598, size 0x4, align 4
    int32 m_nProjectileID; // offset 0x59C, size 0x4, align 4
    CHandle< CBaseEntity > m_hCursorTarget; // offset 0x5A0, size 0x4, align 4
    bool m_bUsedStone; // offset 0x5A4, size 0x1, align 1
    char _pad_05A5[0x3]; // offset 0x5A5
    CHandle< CBaseEntity > m_hTarget; // offset 0x5A8, size 0x4, align 4
    bool m_bTargetStone; // offset 0x5AC, size 0x1, align 1
    char _pad_05AD[0x3]; // offset 0x5AD
};
