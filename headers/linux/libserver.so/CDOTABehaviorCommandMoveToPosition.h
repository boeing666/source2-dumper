#pragma once

class CDOTABehaviorCommandMoveToPosition  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    VectorWS m_vPosition; // offset 0x150, size 0xC, align 4
    bool m_bDirectional; // offset 0x15C, size 0x1, align 1
    bool m_bRelative; // offset 0x15D, size 0x1, align 1
    char _pad_015E[0x2]; // offset 0x15E
};
