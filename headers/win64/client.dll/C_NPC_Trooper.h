#pragma once

class C_NPC_Trooper : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1B30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    int32 m_iLane; // offset 0x1B08, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hTargetedEnemy; // offset 0x1B0C, size 0x4, align 4 | MNotSaved
    bool m_bUsingBossWeapon; // offset 0x1B10, size 0x1, align 1 | MNotSaved
    char _pad_1B11[0x1F]; // offset 0x1B11
};
