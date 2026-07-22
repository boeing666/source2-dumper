#pragma once

class CFuncMoverRouter : public CLogicalEntity /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    int32 m_nMoverIndex; // offset 0x778, size 0x4, align 4
    bool m_bRouteToAllMovers; // offset 0x77C, size 0x1, align 1
    char _pad_077D[0x3]; // offset 0x77D
    CHandle< CPathMover > m_hPathMover; // offset 0x780, size 0x4, align 4
    char _pad_0784[0x4]; // offset 0x784
    CUtlSymbolLarge m_iszPathMoverName; // offset 0x788, size 0x8, align 8
};
