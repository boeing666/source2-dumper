#pragma once

class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem /*0x0*/  // sizeof 0x16E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1560]; // offset 0x0
    int32 m_nGold; // offset 0x1560, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x1564, size 0x4, align 4
    GameTime_t m_tAbilityCreateTime; // offset 0x1568, size 0x4, align 255
    GameTime_t m_tLastDamageTime; // offset 0x156C, size 0x4, align 255
    char _pad_1570[0x4]; // offset 0x1570
    VectorWS m_vHomePosition; // offset 0x1574, size 0xC, align 4
    float32 m_flHeldTime; // offset 0x1580, size 0x4, align 4
    char _pad_1584[0x164]; // offset 0x1584
};
