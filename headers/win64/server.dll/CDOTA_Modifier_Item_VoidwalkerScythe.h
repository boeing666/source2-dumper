#pragma once

class CDOTA_Modifier_Item_VoidwalkerScythe : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_agility; // offset 0x1A78, size 0x4, align 4
    int32 attacks; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_damage; // offset 0x1A80, size 0x4, align 4
    float32 buff_duration; // offset 0x1A84, size 0x4, align 4
    CUtlVector< AttackRecord_t > m_InFlightAttackRecords; // offset 0x1A88, size 0x18, align 8
    int32 m_nCounter; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
