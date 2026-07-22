#pragma once

class CDOTABehaviorCommandMoveToPositionToDropItem  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    VectorWS m_vPosition; // offset 0x150, size 0xC, align 4
    CHandle< CBaseEntity > m_hItem; // offset 0x15C, size 0x4, align 4
};
