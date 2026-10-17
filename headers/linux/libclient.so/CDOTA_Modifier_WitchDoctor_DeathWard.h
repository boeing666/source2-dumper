#pragma once

class CDOTA_Modifier_WitchDoctor_DeathWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_damage; // offset 0x1AA8, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x1AAC, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1AB0, size 0x4, align 4
    bool m_bFirstAttack; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    int32 initial_target_count; // offset 0x1AB8, size 0x4, align 4
    int32 secondary_attack_damage_pct; // offset 0x1ABC, size 0x4, align 4
    char _pad_1AC0[0x38]; // offset 0x1AC0
};
