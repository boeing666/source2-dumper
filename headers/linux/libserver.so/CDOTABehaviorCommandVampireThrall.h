#pragma once

class CDOTABehaviorCommandVampireThrall  // sizeof 0x188, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
    float32 m_flTargetRange; // offset 0x158, size 0x4, align 4
    bool m_bDeny; // offset 0x15C, size 0x1, align 1
    bool m_bInvisBreak; // offset 0x15D, size 0x1, align 1
    bool m_bNightmareAttack; // offset 0x15E, size 0x1, align 1
    bool m_bTurningToTarget; // offset 0x15F, size 0x1, align 1
    bool m_bHasPositionOrder; // offset 0x160, size 0x1, align 1
    bool m_bIsAggressive; // offset 0x161, size 0x1, align 1
    char _pad_0162[0x2]; // offset 0x162
    float32 m_flTargetAngle; // offset 0x164, size 0x4, align 4
    Vector m_vFollowOffset; // offset 0x168, size 0xC, align 4
    VectorWS m_vMoveToPosition; // offset 0x174, size 0xC, align 4
    CHandle< CBaseEntity > m_hMaster; // offset 0x180, size 0x4, align 4
    char _pad_0184[0x4]; // offset 0x184
};
