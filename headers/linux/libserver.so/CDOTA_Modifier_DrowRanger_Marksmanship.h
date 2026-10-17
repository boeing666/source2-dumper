#pragma once

class CDOTA_Modifier_DrowRanger_Marksmanship : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 chance; // offset 0x1AA8, size 0x4, align 4
    ParticleIndex_t m_nFxIndex; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AB0, size 0x18, align 8
    CUtlVector< AttackRecord_t > m_GlacialInFlightAttackRecords; // offset 0x1AC8, size 0x18, align 8
    int32 bonus_factor; // offset 0x1AE0, size 0x4, align 4
    int32 disable_range; // offset 0x1AE4, size 0x4, align 4
    int32 agility_range; // offset 0x1AE8, size 0x4, align 4
    int32 bonus_damage; // offset 0x1AEC, size 0x4, align 4
    int32 split_count; // offset 0x1AF0, size 0x4, align 4
    int32 split_range; // offset 0x1AF4, size 0x4, align 4
    bool m_bGlacialAttack; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x7]; // offset 0x1AF9
};
