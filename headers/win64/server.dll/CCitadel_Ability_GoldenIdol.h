#pragma once

class CCitadel_Ability_GoldenIdol : public CCitadel_Ability_BaseHeldItem /*0x0*/  // sizeof 0x1128, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1000]; // offset 0x0
    int32 m_nGold; // offset 0x1000, size 0x4, align 4
    int32 m_nTeamBias; // offset 0x1004, size 0x4, align 4
    GameTime_t m_tAbilityCreateTime; // offset 0x1008, size 0x4, align 255
    GameTime_t m_tLastDamageTime; // offset 0x100C, size 0x4, align 255
    char _pad_1010[0x4]; // offset 0x1010
    VectorWS m_vHomePosition; // offset 0x1014, size 0xC, align 4
    float32 m_flHeldTime; // offset 0x1020, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_1024[0x104]; // offset 0x1024
};
