#pragma once

class CDOTA_Modifier_Item_Mjollnir : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AF8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AFC, size 0x4, align 4
    float32 chain_chance; // offset 0x1B00, size 0x4, align 4
    int32 chain_strikes; // offset 0x1B04, size 0x4, align 4
    int32 chain_damage; // offset 0x1B08, size 0x4, align 4
    int32 chain_radius; // offset 0x1B0C, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1B10, size 0x4, align 4
    int32 max_charges; // offset 0x1B14, size 0x4, align 4
    float32 chain_cooldown; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B20, size 0x18, align 8
    CountdownTimer m_ChainTimer; // offset 0x1B38, size 0x18, align 8
};
