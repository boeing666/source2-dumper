#pragma once

class CDOTA_Modifier_FacelessVoid_TimeZone_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVectorFixedGrowable< CHandle< CDOTABaseAbility >, 40 > m_vecAbilities; // offset 0x1AA8, size 0xB8, align 8
    int32 bonus_move_speed; // offset 0x1B60, size 0x4, align 4
    int32 bonus_attack_speed; // offset 0x1B64, size 0x4, align 4
    int32 bonus_cast_speed; // offset 0x1B68, size 0x4, align 4
    int32 bonus_turn_speed; // offset 0x1B6C, size 0x4, align 4
    int32 cooldown_acceleration; // offset 0x1B70, size 0x4, align 4
    char _pad_1B74[0x4]; // offset 0x1B74
};
