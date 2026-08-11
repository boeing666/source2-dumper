#pragma once

class CDOTA_Modifier_Pugna_NetherWard : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 mana_multiplier; // offset 0x1A7C, size 0x4, align 4
    float32 mana_drained_per_attack; // offset 0x1A80, size 0x4, align 4
    int32 attacks_to_destroy; // offset 0x1A84, size 0x4, align 4
    int32 health_restore_pct; // offset 0x1A88, size 0x4, align 4
    int32 mana_restore_pct; // offset 0x1A8C, size 0x4, align 4
    float32 self_restoration_range; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
