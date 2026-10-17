#pragma once

class CDOTA_Modifier_Kez_Sai : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 sai_attack_range; // offset 0x1AA8, size 0x4, align 4
    int32 sai_proc_vuln_chance; // offset 0x1AAC, size 0x4, align 4
    int32 sai_swap_bonus_movement_speed; // offset 0x1AB0, size 0x4, align 4
    int32 sai_base_ms; // offset 0x1AB4, size 0x4, align 4
    int32 invis_bonus_crit; // offset 0x1AB8, size 0x4, align 4
    int32 base_crit_pct; // offset 0x1ABC, size 0x4, align 4
    float32 vuln_duration; // offset 0x1AC0, size 0x4, align 4
    float32 sai_base_attack_time; // offset 0x1AC4, size 0x4, align 4
};
