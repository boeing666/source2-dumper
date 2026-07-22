#pragma once

class CDOTA_Modifier_Alchemist_GoblinsGreed : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< GameTime_t > m_DeathList; // offset 0x1A58, size 0x18, align 8
    float32 damage; // offset 0x1A70, size 0x4, align 4
    float32 duration; // offset 0x1A74, size 0x4, align 4
    int32 bonus_gold; // offset 0x1A78, size 0x4, align 4
    int32 bonus_bonus_gold; // offset 0x1A7C, size 0x4, align 4
    int32 bonus_gold_cap; // offset 0x1A80, size 0x4, align 4
    int32 bonus_gold_per_scepter; // offset 0x1A84, size 0x4, align 4
    int32 scepter_bonus_damage; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
