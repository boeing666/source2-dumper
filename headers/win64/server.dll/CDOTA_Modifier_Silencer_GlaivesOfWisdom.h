#pragma once

class CDOTA_Modifier_Silencer_GlaivesOfWisdom : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 intellect_damage_pct; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A80, size 0x18, align 8
    CUtlVector< AttackRecord_t > m_InFlightSilenceAttackRecords; // offset 0x1A98, size 0x18, align 8
    CDOTA_Buff* m_pAttackCounterBuff; // offset 0x1AB0, size 0x8, align 8
};
