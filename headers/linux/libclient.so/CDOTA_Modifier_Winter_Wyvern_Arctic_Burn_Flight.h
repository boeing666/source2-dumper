#pragma once

class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 attack_point; // offset 0x1A58, size 0x4, align 4
    float32 attack_range_bonus; // offset 0x1A5C, size 0x4, align 4
    int32 projectile_speed_bonus; // offset 0x1A60, size 0x4, align 4
    int32 night_vision_bonus; // offset 0x1A64, size 0x4, align 4
    int32 movement_scepter; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1A70, size 0x8, align 8
    int32 max_attacks; // offset 0x1A78, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1A7C, size 0x4, align 4
};
