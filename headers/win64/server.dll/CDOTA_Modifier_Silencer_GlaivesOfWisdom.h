#pragma once

class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 intellect_damage_pct; // offset 0x1AF8, size 0x4, align 4
    char _pad_1AFC[0x4]; // offset 0x1AFC
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B00, size 0x18, align 8
    CUtlVector< AttackRecord_t > m_InFlightSilenceAttackRecords; // offset 0x1B18, size 0x18, align 8
    CDOTA_Buff* m_pAttackCounterBuff; // offset 0x1B30, size 0x8, align 8
};
