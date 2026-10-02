#pragma once

class C_NPC_Boss_Tier3 : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    int32 m_iLane; // offset 0x1B60, size 0x4, align 4 | MNotSaved
    VectorWS m_vecElectricBeamTargetEnd; // offset 0x1B64, size 0xC, align 4
    ETier3State_t m_eAliveState; // offset 0x1B70, size 0x4, align 4 | MNotSaved
    ETier3Phase_t m_ePhase; // offset 0x1B74, size 0x4, align 4 | MNotSaved
    VectorWS m_vShrineAttackTargetPos; // offset 0x1B78, size 0xC, align 4
    char _pad_1B84[0x4]; // offset 0x1B84
};
