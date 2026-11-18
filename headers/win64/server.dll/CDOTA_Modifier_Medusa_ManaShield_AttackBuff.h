#pragma once

class CDOTA_Modifier_Medusa_ManaShield_AttackBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 aspd_increase_buff_duration; // offset 0x1AF8, size 0x4, align 4
    float32 aspd_increase_smoothness; // offset 0x1AFC, size 0x4, align 4
    int32 aspd_increase_mana_cost_pct; // offset 0x1B00, size 0x4, align 4
    float32 aspd_increase_rate_pct; // offset 0x1B04, size 0x4, align 4
    GameTime_t flMaxAspdGameTime; // offset 0x1B08, size 0x4, align 255
    int32 m_iTotalAmount; // offset 0x1B0C, size 0x4, align 4
    float32 m_flStartingAttackSpeed; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
