#pragma once

class CDOTA_Modifier_TemplarAssassin_PsiBlades : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 bonus_attack_range; // offset 0x1A58, size 0x4, align 4
    float32 attack_spill_range; // offset 0x1A5C, size 0x4, align 4
    float32 attack_spill_width; // offset 0x1A60, size 0x4, align 4
    int32 attack_spill_pct; // offset 0x1A64, size 0x4, align 4
    int32 attack_spill_penalty; // offset 0x1A68, size 0x4, align 4
    float32 additional_bonus_attack_range; // offset 0x1A6C, size 0x4, align 4
    float32 additional_attack_spill_range; // offset 0x1A70, size 0x4, align 4
    float32 spill_slow_duration; // offset 0x1A74, size 0x4, align 4
};
