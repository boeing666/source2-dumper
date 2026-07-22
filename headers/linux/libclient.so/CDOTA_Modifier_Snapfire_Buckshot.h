#pragma once

class CDOTA_Modifier_Snapfire_Buckshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 miss_chance; // offset 0x1A58, size 0x4, align 4
    int32 damage_amp; // offset 0x1A5C, size 0x4, align 4
    int32 split_shot; // offset 0x1A60, size 0x4, align 4
    int32 glancing_shot_damage_pct; // offset 0x1A64, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A68, size 0x18, align 8
};
