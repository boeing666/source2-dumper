#pragma once

class CDOTABehaviorNeutralAggro  // sizeof 0xA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    VectorWS m_vHomePosition; // offset 0x60, size 0xC, align 4
    bool m_bNoLeashTime; // offset 0x6C, size 0x1, align 1
    bool m_bShortLeashTime; // offset 0x6D, size 0x1, align 1
    char _pad_006E[0x2]; // offset 0x6E
    CountdownTimer m_LeashTimer; // offset 0x70, size 0x18, align 8
    CountdownTimer m_FleeAgainTimer; // offset 0x88, size 0x18, align 8
};
