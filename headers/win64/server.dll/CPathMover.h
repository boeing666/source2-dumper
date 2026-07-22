#pragma once

class CPathMover : public CPathWithDynamicNodes /*0x0*/  // sizeof 0x620, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlVector< CHandle< CFuncMover > > m_vecMovers; // offset 0x5F0, size 0x18, align 8
    CHandle< CPathMoverEntitySpawner > m_hMoverSpawner; // offset 0x608, size 0x4, align 4
    char _pad_060C[0x4]; // offset 0x60C
    CUtlSymbolLarge m_iszMoverSpawnerName; // offset 0x610, size 0x8, align 8
    char _pad_0618[0x8]; // offset 0x618
};
