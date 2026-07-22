#pragma once

class CPathMetricEvaluator : public CMotionMetricEvaluator /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlVector< float32 > m_pathTimeSamples; // offset 0x50, size 0x18, align 8
    float32 m_flDistance; // offset 0x68, size 0x4, align 4
    bool m_bExtrapolateMovement; // offset 0x6C, size 0x1, align 1
    char _pad_006D[0x3]; // offset 0x6D
    float32 m_flMinExtrapolationSpeed; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x4]; // offset 0x74
};
