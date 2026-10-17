#pragma once

class CDOTA_Modifier_Pugna_NetherWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    float32 mana_multiplier; // offset 0x1AAC, size 0x4, align 4
    float32 mana_drained_per_attack; // offset 0x1AB0, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1AB4, size 0x4, align 4
    int32 health_restore_pct; // offset 0x1AB8, size 0x4, align 4
    int32 mana_restore_pct; // offset 0x1ABC, size 0x4, align 4
    float32 self_restoration_range; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
