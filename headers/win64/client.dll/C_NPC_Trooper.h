#pragma once

class C_NPC_Trooper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B88, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    int32 m_iLane; // offset 0x1B60, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1B64, size 0x4, align 4 | MNotSaved
    bool m_bUsingBossWeapon; // offset 0x1B68, size 0x1, align 1 | MNotSaved
    char _pad_1B69[0x1F]; // offset 0x1B69
};
