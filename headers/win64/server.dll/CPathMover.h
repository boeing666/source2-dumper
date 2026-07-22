#pragma once

class CPathMover : public CPathWithDynamicNodes /*0x0*/  // sizeof 0x640, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CUtlVector< CHandle< CFuncMover > > m_vecMovers; // offset 0x5F0, size 0x18, align 8
    CUtlVector< CHandle< CPathMoverEntitySpawner > > m_vecSpawners; // offset 0x608, size 0x18, align 8
    CUtlSymbolLarge m_iszMoverSpawnerName; // offset 0x620, size 0x8, align 8
    CHandle< CFuncMoverRouter > m_hMoverRouter; // offset 0x628, size 0x4, align 4
    char _pad_062C[0x4]; // offset 0x62C
    CUtlSymbolLarge m_iszMoverRouterName; // offset 0x630, size 0x8, align 8
    float32 m_flSampleSpacing; // offset 0x638, size 0x4, align 4
    char _pad_063C[0x4]; // offset 0x63C
};
