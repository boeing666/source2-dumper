#pragma once

class CDOTABehaviorNeutralHome  // sizeof 0x188, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    VectorWS m_vHomePosition; // offset 0x150, size 0xC, align 4
    VectorWS m_vHomeFacing; // offset 0x15C, size 0xC, align 4
    bool m_bHomePositionSet; // offset 0x168, size 0x1, align 1
    char _pad_0169[0x7]; // offset 0x169
    CountdownTimer m_IdleRareAnimationTime; // offset 0x170, size 0x18, align 8
};
