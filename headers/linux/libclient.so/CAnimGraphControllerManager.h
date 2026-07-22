#pragma once

class CAnimGraphControllerManager  // sizeof 0x98, align 0xFF (client)
{
public:
    CUtlVector< CAnimGraphControllerBase* > m_controllers; // offset 0x0, size 0x18, align 8
    char _pad_0018[0x78]; // offset 0x18
    bool m_bGraphBindingsCreated; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x7]; // offset 0x91
};
