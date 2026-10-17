#pragma once

class CDOTA_Modifier_Item_Mjollnir : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1AAC, size 0x4, align 4
    int32 chain_chance; // offset 0x1AB0, size 0x4, align 4
    int32 chain_strikes; // offset 0x1AB4, size 0x4, align 4
    int32 chain_damage; // offset 0x1AB8, size 0x4, align 4
    int32 chain_radius; // offset 0x1ABC, size 0x4, align 4
    int32 chain_damage_per_charge; // offset 0x1AC0, size 0x4, align 4
    int32 max_charges; // offset 0x1AC4, size 0x4, align 4
    float32 chain_cooldown; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AD0, size 0x18, align 8
    CountdownTimer m_ChainTimer; // offset 0x1AE8, size 0x18, align 8
};
