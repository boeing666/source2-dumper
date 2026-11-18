#pragma once

class CDOTA_Modifier_TemplarAssassin_PsiBlades : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 bonus_attack_range; // offset 0x1AF8, size 0x4, align 4
    float32 attack_spill_range; // offset 0x1AFC, size 0x4, align 4
    float32 attack_spill_width; // offset 0x1B00, size 0x4, align 4
    int32 attack_spill_pct; // offset 0x1B04, size 0x4, align 4
    int32 attack_spill_penalty; // offset 0x1B08, size 0x4, align 4
    float32 additional_bonus_attack_range; // offset 0x1B0C, size 0x4, align 4
    float32 additional_attack_spill_range; // offset 0x1B10, size 0x4, align 4
    float32 spill_slow_duration; // offset 0x1B14, size 0x4, align 4
};
