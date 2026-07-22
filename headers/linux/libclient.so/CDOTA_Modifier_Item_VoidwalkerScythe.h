#pragma once

class CDOTA_Modifier_Item_VoidwalkerScythe : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_agility; // offset 0x1A58, size 0x4, align 4
    int32 attacks; // offset 0x1A5C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A60, size 0x4, align 4
    float32 buff_duration; // offset 0x1A64, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A68, size 0x18, align 8
    int32 m_nCounter; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
