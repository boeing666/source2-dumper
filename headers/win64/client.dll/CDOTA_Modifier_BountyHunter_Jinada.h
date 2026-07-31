#pragma once

class CDOTA_Modifier_BountyHunter_Jinada : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 bonus_damage; // offset 0x1A78, size 0x4, align 4
    int32 gold_steal; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nFXIndexA; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A84, size 0x4, align 255
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
};
