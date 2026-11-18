#pragma once

class CDOTA_Modifier_Snapfire_Buckshot : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 miss_chance; // offset 0x1AF8, size 0x4, align 4
    int32 damage_amp; // offset 0x1AFC, size 0x4, align 4
    int32 split_shot; // offset 0x1B00, size 0x4, align 4
    int32 glancing_shot_damage_pct; // offset 0x1B04, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1B08, size 0x18, align 8
};
