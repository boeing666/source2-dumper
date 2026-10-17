#pragma once

class CDOTA_Modifier_Medusa_ManaShield_AttackBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 aspd_increase_buff_duration; // offset 0x1AA8, size 0x4, align 4
    float32 aspd_increase_smoothness; // offset 0x1AAC, size 0x4, align 4
    int32 aspd_increase_mana_cost_pct; // offset 0x1AB0, size 0x4, align 4
    float32 aspd_increase_rate_pct; // offset 0x1AB4, size 0x4, align 4
    GameTime_t flMaxAspdGameTime; // offset 0x1AB8, size 0x4, align 255
    int32 m_iTotalAmount; // offset 0x1ABC, size 0x4, align 4
    float32 m_flStartingAttackSpeed; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
