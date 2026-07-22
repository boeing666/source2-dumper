#pragma once

class CDOTABehaviorCommandMoveToNPCToGive  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x68]; // offset 0x0
    CDOTABehaviorMoveTo m_MoveTo; // offset 0x68, size 0xE8, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x150, size 0x4, align 4
    int32 m_nMovementState; // offset 0x154, size 0x4, align 4
    CHandle< CBaseEntity > m_hItem; // offset 0x158, size 0x4, align 4
    float32 m_flRange; // offset 0x15C, size 0x4, align 4
};
