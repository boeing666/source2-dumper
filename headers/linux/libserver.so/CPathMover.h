#pragma once

class CPathMover : public CPathWithDynamicNodes /*0x0*/  // sizeof 0x910, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8C0]; // offset 0x0
    CUtlVector< CHandle< CFuncMover > > m_vecMovers; // offset 0x8C0, size 0x18, align 8
    CUtlVector< CHandle< CPathMoverEntitySpawner > > m_vecSpawners; // offset 0x8D8, size 0x18, align 8
    CUtlSymbolLarge m_iszMoverSpawnerName; // offset 0x8F0, size 0x8, align 8
    CHandle< CFuncMoverRouter > m_hMoverRouter; // offset 0x8F8, size 0x4, align 4
    char _pad_08FC[0x4]; // offset 0x8FC
    CUtlSymbolLarge m_iszMoverRouterName; // offset 0x900, size 0x8, align 8
    float32 m_flSampleSpacing; // offset 0x908, size 0x4, align 4
    char _pad_090C[0x4]; // offset 0x90C
};
