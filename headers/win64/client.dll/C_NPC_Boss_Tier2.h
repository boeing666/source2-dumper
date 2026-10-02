#pragma once

class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C28, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B74]; // offset 0x0
    int32 m_iLane; // offset 0x1B74, size 0x4, align 4 | MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1B78, size 0x4, align 255 | MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1B7C, size 0x4, align 255 | MNotSaved
    GameTime_t m_flLastWeakpointHitTime; // offset 0x1B80, size 0x4, align 255 | MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1B84, size 0x4, align 4 | MNotSaved
    VectorWS m_vecElectricBeamLookTarget; // offset 0x1B88, size 0xC, align 4
    char _pad_1B94[0x84]; // offset 0x1B94
    int32 m_nElectricBeamCasts; // offset 0x1C18, size 0x4, align 4
    char _pad_1C1C[0xC]; // offset 0x1C1C
};
