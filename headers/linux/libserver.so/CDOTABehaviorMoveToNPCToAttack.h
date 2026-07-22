#pragma once

class CDOTABehaviorMoveToNPCToAttack  // sizeof 0x1A0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    char _pad_0150[0x8]; // offset 0x150
    bool m_bMovingToLastKnownTargetPosition; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x7]; // offset 0x159
    CountdownTimer m_AttackDelay; // offset 0x160, size 0x18, align 8
    CountdownTimer m_ChaseLimit; // offset 0x178, size 0x18, align 8
    bool m_bInAttackPosition; // offset 0x190, size 0x1, align 1
    bool m_bTurningToTarget; // offset 0x191, size 0x1, align 1
    char _pad_0192[0x2]; // offset 0x192
    float32 m_flTargetAngle; // offset 0x194, size 0x4, align 4
    bool m_bAttackMove; // offset 0x198, size 0x1, align 1
    char _pad_0199[0x7]; // offset 0x199
};
