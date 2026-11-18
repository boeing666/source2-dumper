#pragma once

class CDOTA_Modifier_Zuus_Lightning_Hands : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1AF8, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B10, size 0x4, align 255
    int32 arc_lightning_damage_pct; // offset 0x1B14, size 0x4, align 4
    int32 attack_speed_bonus; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
