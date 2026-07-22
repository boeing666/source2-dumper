#pragma once

class CDOTA_Modifier_Tidehunter_KrakenShell : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_iDamageTaken; // offset 0x1A58, size 0x4, align 4
    int32 damage_reduction; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_reduction_per_kill; // offset 0x1A60, size 0x4, align 4
    float32 creep_reduction_penalty_pct; // offset 0x1A64, size 0x4, align 4
    float32 active_pct_effectiveness; // offset 0x1A68, size 0x4, align 4
    int32 damage_cleanse; // offset 0x1A6C, size 0x4, align 4
    float32 damage_reset_interval; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
