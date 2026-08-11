#pragma once

class CDOTA_Modifier_Alchemist_GoblinsGreed : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< GameTime_t > m_DeathList; // offset 0x1A78, size 0x18, align 8
    float32 damage; // offset 0x1A90, size 0x4, align 4
    float32 duration; // offset 0x1A94, size 0x4, align 4
    int32 bonus_gold; // offset 0x1A98, size 0x4, align 4
    int32 bonus_bonus_gold; // offset 0x1A9C, size 0x4, align 4
    int32 bonus_gold_cap; // offset 0x1AA0, size 0x4, align 4
    int32 bonus_gold_per_scepter; // offset 0x1AA4, size 0x4, align 4
    int32 scepter_bonus_damage; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
