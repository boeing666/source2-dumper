#pragma once

class CDOTA_Modifier_BountyHunter_WindWalk : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 damage_reduction_pct; // offset 0x1B08, size 0x4, align 4
    float32 shard_stun_duration; // offset 0x1B0C, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B10, size 0x18, align 8
    int32 bonus_move_speed_pct; // offset 0x1B28, size 0x4, align 4
    char _pad_1B2C[0x4]; // offset 0x1B2C
};
