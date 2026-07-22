#pragma once

class CDOTA_Modifier_Slark_ShadowDance_PassiveRegen : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_movement_speed; // offset 0x1A58, size 0x4, align 4
    float32 bonus_regen; // offset 0x1A5C, size 0x4, align 4
    float32 corruption_duration; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A68, size 0x18, align 8
};
