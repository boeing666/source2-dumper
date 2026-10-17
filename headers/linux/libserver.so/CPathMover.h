#pragma once

class CPathMover : public CPathWithDynamicNodes /*0x0*/  // sizeof 0x940, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CUtlVector< CHandle< CFuncMover > > m_vecMovers; // offset 0x8E8, size 0x18, align 8
    CUtlVector< CHandle< CPathMoverEntitySpawner > > m_vecSpawners; // offset 0x900, size 0x18, align 8
    CUtlSymbolLarge m_iszMoverSpawnerName; // offset 0x918, size 0x8, align 8
    CHandle< CFuncMoverRouter > m_hMoverRouter; // offset 0x920, size 0x4, align 4
    char _pad_0924[0x4]; // offset 0x924
    CUtlSymbolLarge m_iszMoverRouterName; // offset 0x928, size 0x8, align 8
    float32 m_flSampleSpacing; // offset 0x930, size 0x4, align 4
    char _pad_0934[0xC]; // offset 0x934
};
