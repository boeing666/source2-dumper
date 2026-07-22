#pragma once

struct SelectorInstanceData_t  // sizeof 0x2C, align 0xFF [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    CRelativeArray< float32 > m_weights; // offset 0x0, size 0x8, align 4
    CAnimNetVar< float32 > m_currentIndexStartTime; // offset 0x8, size 0xC, align 4
    int32 m_currentIndex; // offset 0x14, size 0x4, align 4
    int32 m_previousIndex; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x10]; // offset 0x1C
};
