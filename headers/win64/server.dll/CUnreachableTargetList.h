#pragma once

class CUnreachableTargetList  // sizeof 0x20, align 0xFF (server)
{
public:
    CUtlVector< UnreachableTarget_t > m_vecTargets; // offset 0x0, size 0x18, align 8
    char _pad_0018[0x8]; // offset 0x18
};
