#pragma once

class CDOTA_Modifier_Bloodthorn_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 target_crit_multiplier; // offset 0x1AF8, size 0x4, align 4
    float32 silence_damage_percent; // offset 0x1AFC, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< AttackRecord_t > m_vRecords; // offset 0x1B08, size 0x18, align 8
};
