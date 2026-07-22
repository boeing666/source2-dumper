#pragma once

class C_NPC_Boss_Tier2 : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C98, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BEC]; // offset 0x0
    int32 m_iLane; // offset 0x1BEC, size 0x4, align 4 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutStart; // offset 0x1BF0, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flFadeOutEnd; // offset 0x1BF4, size 0x4, align 255 | MNetworkEnable MNotSaved
    GameTime_t m_flLastWeakpointHitTime; // offset 0x1BF8, size 0x4, align 255 | MNetworkEnable MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1BFC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    VectorWS m_vecElectricBeamLookTarget; // offset 0x1C00, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_1C0C[0x84]; // offset 0x1C0C
    int32 m_nElectricBeamCasts; // offset 0x1C90, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_1C94[0x4]; // offset 0x1C94
};
