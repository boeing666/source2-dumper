#pragma once

class CDOTA_Modifier_Zuus_Lightning_Hands : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AA8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AC0, size 0x4, align 255
    int32 arc_lightning_damage_pct; // offset 0x1AC4, size 0x4, align 4
    int32 arc_lightning_damage_illusion_pct; // offset 0x1AC8, size 0x4, align 4
    int32 attack_speed_bonus; // offset 0x1ACC, size 0x4, align 4
};
