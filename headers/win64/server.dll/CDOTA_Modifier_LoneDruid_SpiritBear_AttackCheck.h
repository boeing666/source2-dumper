#pragma once

class CDOTA_Modifier_LoneDruid_SpiritBear_AttackCheck : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bCanBeResummoned; // offset 0x1AA8, size 0x1, align 1
    bool m_bCanAttack; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x2]; // offset 0x1AAA
    ParticleIndex_t m_nFxIndex; // offset 0x1AAC, size 0x4, align 255
    ParticleIndex_t m_nStatusFxIndex; // offset 0x1AB0, size 0x4, align 255
    int32 bear_attack_leash_range; // offset 0x1AB4, size 0x4, align 4
};
