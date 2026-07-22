#pragma once

class CDOTABehaviorCommandPatrol  // sizeof 0x180, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    VectorWS m_vOrderPosition; // offset 0x150, size 0xC, align 4
    char _pad_015C[0x4]; // offset 0x15C
    CUtlVector< VectorWS > m_vPatrolPoints; // offset 0x160, size 0x18, align 8
    int32 m_nCurrentTargetIndex; // offset 0x178, size 0x4, align 4
    int32 m_nDirection; // offset 0x17C, size 0x4, align 4
};
