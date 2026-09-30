#pragma once

class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B1C]; // offset 0x0
    int32 m_iLane; // offset 0x1B1C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1B20, size 0x4, align 255 | MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1B24, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastWeakpointHitTime; // offset 0x1B28, size 0x4, align 255 | MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1B2C, size 0x4, align 4 | MNotSaved
    VectorWS m_vecElectricBeamLookTarget; // offset 0x1B30, size 0xC, align 4
    char _pad_1B3C[0x84]; // offset 0x1B3C
    int32 m_nElectricBeamCasts; // offset 0x1BC0, size 0x4, align 4
    char _pad_1BC4[0xC]; // offset 0x1BC4
};
