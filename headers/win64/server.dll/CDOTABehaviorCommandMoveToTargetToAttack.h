#pragma once

class CDOTABehaviorCommandMoveToTargetToAttack  // sizeof 0x178, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x150, size 0x4, align 4
    int32 m_nMovementState; // offset 0x154, size 0x4, align 4
    bool m_bFailedCast; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x3]; // offset 0x159
    float32 m_flTargetRange; // offset 0x15C, size 0x4, align 4
    bool m_bDeny; // offset 0x160, size 0x1, align 1
    bool m_bInvisBreak; // offset 0x161, size 0x1, align 1
    bool m_bNightmareAttack; // offset 0x162, size 0x1, align 1
    bool m_bTurningToTarget; // offset 0x163, size 0x1, align 1
    float32 m_flTargetAngle; // offset 0x164, size 0x4, align 4
    VectorWS m_vMoveToOrderPosition; // offset 0x168, size 0xC, align 4
    char _pad_0174[0x4]; // offset 0x174
};
