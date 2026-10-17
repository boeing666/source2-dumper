#pragma once

class CDOTA_Modifier_Bloodthorn_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 target_crit_multiplier; // offset 0x1AA8, size 0x4, align 4
    float32 silence_damage_percent; // offset 0x1AAC, size 0x4, align 4
    int32 proc_damage_heroes; // offset 0x1AB0, size 0x4, align 4
    int32 proc_damage_creeps; // offset 0x1AB4, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CUtlVector< AttackRecord_t > m_vRecords; // offset 0x1AC0, size 0x18, align 8
};
