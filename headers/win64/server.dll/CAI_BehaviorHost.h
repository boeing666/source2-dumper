#pragma once

class CAI_BehaviorHost  // sizeof 0x30, align 0xFF (server)
{
public:
    CAI_Behavior* m_pActiveBehavior; // offset 0x0, size 0x8, align 8 | MNotSaved
    CUtlVector< CAI_Behavior* > m_Behaviors; // offset 0x8, size 0x18, align 8 | MNotSaved
    CAI_BaseNPC* m_pOuter; // offset 0x20, size 0x8, align 8 | MNotSaved
    bool m_bCalledBehaviorSelectSchedule; // offset 0x28, size 0x1, align 1 | MNotSaved
    char _pad_0029[0x7]; // offset 0x29
};
