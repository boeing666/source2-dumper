#pragma once

class CDOTABehaviorCommandMoveToItemToTake  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_hItem; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x4]; // offset 0x154
};
