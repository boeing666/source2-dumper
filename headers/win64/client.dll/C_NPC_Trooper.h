#pragma once

class C_NPC_Trooper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C20, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BD0]; // offset 0x0
    int32 m_iLane; // offset 0x1BD0, size 0x4, align 4 | MNetworkEnable MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1BD4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    float32 m_flHealingChargeParticlePct; // offset 0x1BD8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNotSaved
    char _pad_1BDC[0x44]; // offset 0x1BDC
};
