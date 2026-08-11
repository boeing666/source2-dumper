#pragma once

class CDOTA_Modifier_Item_Caster_Rapier : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 cast_range_limit; // offset 0x1A78, size 0x4, align 4
    int32 bonus_spell_amp; // offset 0x1A7C, size 0x4, align 4
    int32 backstab_duration; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
};
