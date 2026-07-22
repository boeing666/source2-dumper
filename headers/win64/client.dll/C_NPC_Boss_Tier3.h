#pragma once

class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BF8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BD0]; // offset 0x0
    int32 m_iLane; // offset 0x1BD0, size 0x4, align 4 | MNetworkEnable MNotSaved
    Vector m_vecElectricBeamTargetEnd; // offset 0x1BD4, size 0xC, align 4 | MNetworkEnable
    ETier3State_t m_eAliveState; // offset 0x1BE0, size 0x4, align 4 | MNetworkEnable MNotSaved
    ETier3Phase_t m_ePhase; // offset 0x1BE4, size 0x4, align 4 | MNetworkEnable MNotSaved
    Vector m_vShrineAttackTargetPos; // offset 0x1BE8, size 0xC, align 4 | MNetworkEnable
    char _pad_1BF4[0x4]; // offset 0x1BF4
};
