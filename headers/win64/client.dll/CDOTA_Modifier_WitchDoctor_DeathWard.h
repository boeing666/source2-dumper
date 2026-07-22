#pragma once

class CDOTA_Modifier_WitchDoctor_DeathWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_damage; // offset 0x1A58, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_attack_range; // offset 0x1A60, size 0x4, align 4
    bool m_bFirstAttack; // offset 0x1A64, size 0x1, align 1
    char _pad_1A65[0x3]; // offset 0x1A65
    int32 initial_target_count; // offset 0x1A68, size 0x4, align 4
    int32 secondary_attack_damage_pct; // offset 0x1A6C, size 0x4, align 4
    char _pad_1A70[0x38]; // offset 0x1A70
};
