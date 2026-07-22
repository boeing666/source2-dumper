#pragma once

class CDOTA_Modifier_Bloodthorn_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 target_crit_multiplier; // offset 0x1A58, size 0x4, align 4
    float32 silence_damage_percent; // offset 0x1A5C, size 0x4, align 4
    int32 proc_damage_heroes; // offset 0x1A60, size 0x4, align 4
    int32 proc_damage_creeps; // offset 0x1A64, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CUtlVector< AttackRecord_t > m_vRecords; // offset 0x1A70, size 0x18, align 8
};
