#pragma once

class CDOTA_Modifier_Kez_Sai : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 sai_attack_range; // offset 0x1A78, size 0x4, align 4
    int32 sai_proc_vuln_chance; // offset 0x1A7C, size 0x4, align 4
    int32 sai_swap_bonus_movement_speed; // offset 0x1A80, size 0x4, align 4
    int32 sai_base_ms; // offset 0x1A84, size 0x4, align 4
    int32 invis_bonus_crit; // offset 0x1A88, size 0x4, align 4
    int32 base_crit_pct; // offset 0x1A8C, size 0x4, align 4
    float32 vuln_duration; // offset 0x1A90, size 0x4, align 4
    float32 sai_base_attack_time; // offset 0x1A94, size 0x4, align 4
};
