#pragma once

class CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 attack_damage; // offset 0x1A78, size 0x4, align 4
    int32 creep_damage_penalty; // offset 0x1A7C, size 0x4, align 4
    int32 inner_radius_bonus_damage_pct; // offset 0x1A80, size 0x4, align 4
    bool m_bIsInnerRadiusHit; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    float32 damage_pct; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
