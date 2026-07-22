#pragma once

class CMotionDataSet  // sizeof 0x20, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CMotionGraphGroup > m_groups; // offset 0x0, size 0x18, align 8
    int32 m_nDimensionCount; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
};
