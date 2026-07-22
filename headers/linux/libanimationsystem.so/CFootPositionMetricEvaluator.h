#pragma once

class CFootPositionMetricEvaluator : public CMotionMetricEvaluator /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlVector< int32 > m_footIndices; // offset 0x50, size 0x18, align 8
    bool m_bIgnoreSlope; // offset 0x68, size 0x1, align 1
    char _pad_0069[0x7]; // offset 0x69
};
