#pragma once

class CDOTA_Modifier_TemplarAssassin_PsiBlades : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 bonus_attack_range; // offset 0x1AA8, size 0x4, align 4
    float32 attack_spill_range; // offset 0x1AAC, size 0x4, align 4
    float32 attack_spill_width; // offset 0x1AB0, size 0x4, align 4
    int32 attack_spill_pct; // offset 0x1AB4, size 0x4, align 4
    int32 attack_spill_penalty; // offset 0x1AB8, size 0x4, align 4
    float32 additional_bonus_attack_range; // offset 0x1ABC, size 0x4, align 4
    float32 additional_attack_spill_range; // offset 0x1AC0, size 0x4, align 4
    float32 spill_slow_duration; // offset 0x1AC4, size 0x4, align 4
};
