#pragma once

class CDOTA_Modifier_WitchDoctor_DeathWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A80, size 0x4, align 4
    bool m_bFirstAttack; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    int32 initial_target_count; // offset 0x1A88, size 0x4, align 4
    int32 secondary_attack_damage_pct; // offset 0x1A8C, size 0x4, align 4
    char _pad_1A90[0x38]; // offset 0x1A90
};
