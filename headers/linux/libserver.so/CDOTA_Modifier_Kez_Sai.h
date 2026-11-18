#pragma once

class CDOTA_Modifier_Kez_Sai : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 sai_attack_range; // offset 0x1AF8, size 0x4, align 4
    int32 sai_proc_vuln_chance; // offset 0x1AFC, size 0x4, align 4
    int32 sai_swap_bonus_movement_speed; // offset 0x1B00, size 0x4, align 4
    int32 sai_base_ms; // offset 0x1B04, size 0x4, align 4
    int32 invis_bonus_crit; // offset 0x1B08, size 0x4, align 4
    int32 base_crit_pct; // offset 0x1B0C, size 0x4, align 4
    float32 vuln_duration; // offset 0x1B10, size 0x4, align 4
    float32 sai_base_attack_time; // offset 0x1B14, size 0x4, align 4
    char _pad_1B18[0x18]; // offset 0x1B18
};
