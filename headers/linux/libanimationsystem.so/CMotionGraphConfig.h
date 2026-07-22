#pragma once

class CMotionGraphConfig  // sizeof 0x20, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32[4] m_paramValues; // offset 0x0, size 0x10, align 4
    float32 m_flDuration; // offset 0x10, size 0x4, align 4
    MotionIndex m_nMotionIndex; // offset 0x14, size 0x4, align 2
    int32 m_nSampleStart; // offset 0x18, size 0x4, align 4
    int32 m_nSampleCount; // offset 0x1C, size 0x4, align 4
};
