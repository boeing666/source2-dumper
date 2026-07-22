#pragma once

class CMotionMetricEvaluator  // sizeof 0x50, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlVector< float32 > m_means; // offset 0x18, size 0x18, align 8
    CUtlVector< float32 > m_standardDeviations; // offset 0x30, size 0x18, align 8
    float32 m_flWeight; // offset 0x48, size 0x4, align 4
    int32 m_nDimensionStartIndex; // offset 0x4C, size 0x4, align 4
};
