#pragma once

class CNodeEnt : public CServerOnlyPointEntity /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDontDropNode; // offset 0x4B0, size 0x1, align 1 | MNotSaved
    HullFlags_t m_HullForceFlags; // offset 0x4B1, size 0xA, align 255 | MNotSaved
    char _pad_04BB[0x5]; // offset 0x4BB
    HintNodeData m_NodeData; // offset 0x4C0, size 0x40, align 8
    char _pad_0500[0x8]; // offset 0x500
};
