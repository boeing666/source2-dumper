#pragma once

class CDOTA_Modifier_Snapfire_Buckshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 miss_chance; // offset 0x1A78, size 0x4, align 4
    int32 damage_amp; // offset 0x1A7C, size 0x4, align 4
    int32 split_shot; // offset 0x1A80, size 0x4, align 4
    int32 glancing_shot_damage_pct; // offset 0x1A84, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
};
