#pragma once

class CDOTABehaviorIdle  // sizeof 0x78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CountdownTimer m_IdleRareAnimationTime; // offset 0x60, size 0x18, align 8
};
