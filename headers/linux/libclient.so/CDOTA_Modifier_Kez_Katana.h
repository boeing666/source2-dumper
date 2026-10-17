#pragma once

class CDOTA_Modifier_Kez_Katana : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 katana_attack_range; // offset 0x1AA8, size 0x4, align 4
    float32 katana_base_attack_time; // offset 0x1AAC, size 0x4, align 4
    int32 katana_agility_bonus_base_damage; // offset 0x1AB0, size 0x4, align 4
    float32 katana_bleed_attack_damage_pct; // offset 0x1AB4, size 0x4, align 4
    int32 katana_base_ms; // offset 0x1AB8, size 0x4, align 4
    float32 katana_bleed_duration; // offset 0x1ABC, size 0x4, align 4
    int32 katana_swap_bonus_damage; // offset 0x1AC0, size 0x4, align 4
    float32 impale_duration; // offset 0x1AC4, size 0x4, align 4
    int32 bleed_as_rupture_pct; // offset 0x1AC8, size 0x4, align 4
    int32 max_stacks; // offset 0x1ACC, size 0x4, align 4
    int32 m_nBonusPreAttackDamage; // offset 0x1AD0, size 0x4, align 4
    bool m_bBackstab; // offset 0x1AD4, size 0x1, align 1
    char _pad_1AD5[0x3]; // offset 0x1AD5
    float32 m_flStacksForLifesteal; // offset 0x1AD8, size 0x4, align 4
    AttackRecord_t m_nImpaleStartAttackRecord; // offset 0x1ADC, size 0x2, align 255
    AttackRecord_t m_nImpaleEndAttackRecord; // offset 0x1ADE, size 0x2, align 255
};
