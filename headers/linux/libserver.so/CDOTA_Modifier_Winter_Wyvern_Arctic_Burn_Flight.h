#pragma once

class CDOTA_Modifier_Winter_Wyvern_Arctic_Burn_Flight : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 attack_point; // offset 0x1AF8, size 0x4, align 4
    float32 attack_range_bonus; // offset 0x1AFC, size 0x4, align 4
    int32 projectile_speed_bonus; // offset 0x1B00, size 0x4, align 4
    int32 night_vision_bonus; // offset 0x1B04, size 0x4, align 4
    int32 movement_scepter; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CUtlSymbolLarge m_iszRangedAttackEffect; // offset 0x1B10, size 0x8, align 8
    int32 max_attacks; // offset 0x1B18, size 0x4, align 4
    int32 m_iNumAttacks; // offset 0x1B1C, size 0x4, align 4
};
