#pragma once

class CDOTA_Modifier_Kez_Katana : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 katana_attack_range; // offset 0x1A78, size 0x4, align 4
    float32 katana_base_attack_time; // offset 0x1A7C, size 0x4, align 4
    int32 katana_agility_bonus_base_damage; // offset 0x1A80, size 0x4, align 4
    int32 katana_bleed_attack_damage_pct; // offset 0x1A84, size 0x4, align 4
    int32 katana_base_ms; // offset 0x1A88, size 0x4, align 4
    float32 katana_bleed_duration; // offset 0x1A8C, size 0x4, align 4
    int32 katana_swap_bonus_damage; // offset 0x1A90, size 0x4, align 4
    float32 impale_duration; // offset 0x1A94, size 0x4, align 4
    int32 bleed_as_rupture_pct; // offset 0x1A98, size 0x4, align 4
    int32 max_stacks; // offset 0x1A9C, size 0x4, align 4
    int32 m_nBonusPreAttackDamage; // offset 0x1AA0, size 0x4, align 4
    bool m_bBackstab; // offset 0x1AA4, size 0x1, align 1
    char _pad_1AA5[0x3]; // offset 0x1AA5
    float32 m_flStacksForLifesteal; // offset 0x1AA8, size 0x4, align 4
    AttackRecord_t m_nImpaleStartAttackRecord; // offset 0x1AAC, size 0x2, align 255
    AttackRecord_t m_nImpaleEndAttackRecord; // offset 0x1AAE, size 0x2, align 255
};
