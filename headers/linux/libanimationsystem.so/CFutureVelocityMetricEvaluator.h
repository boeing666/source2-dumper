#pragma once

class CFutureVelocityMetricEvaluator : public CMotionMetricEvaluator /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    float32 m_flDistance; // offset 0x50, size 0x4, align 4
    float32 m_flStoppingDistance; // offset 0x54, size 0x4, align 4
    float32 m_flTargetSpeed; // offset 0x58, size 0x4, align 4
    VelocityMetricMode m_eMode; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
};
