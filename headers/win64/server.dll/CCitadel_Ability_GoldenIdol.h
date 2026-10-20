#pragma once

class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem /*0x0*/  // sizeof 0x16F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1568]; // offset 0x0
    int32 m_nGold; // offset 0x1568, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x156C, size 0x4, align 4
    GameTime_t m_tAbilityCreateTime; // offset 0x1570, size 0x4, align 255
    GameTime_t m_tLastDamageTime; // offset 0x1574, size 0x4, align 255
    char _pad_1578[0x4]; // offset 0x1578
    VectorWS m_vHomePosition; // offset 0x157C, size 0xC, align 4
    float32 m_flHeldTime; // offset 0x1588, size 0x4, align 4
    char _pad_158C[0x164]; // offset 0x158C
};
