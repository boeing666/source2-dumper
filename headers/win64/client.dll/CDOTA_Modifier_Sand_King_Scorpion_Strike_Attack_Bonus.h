#pragma once

class CDOTA_Modifier_Sand_King_Scorpion_Strike_Attack_Bonus : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 attack_damage; // offset 0x1AA8, size 0x4, align 4
    int32 creep_damage_penalty; // offset 0x1AAC, size 0x4, align 4
    int32 inner_radius_bonus_damage_pct; // offset 0x1AB0, size 0x4, align 4
    bool m_bIsInnerRadiusHit; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    float32 damage_pct; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
