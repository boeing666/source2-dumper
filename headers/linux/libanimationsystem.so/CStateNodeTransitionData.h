#pragma once

class CStateNodeTransitionData  // sizeof 0x1C, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CBlendCurve m_curve; // offset 0x0, size 0x8, align 4
    uint8_t m_bReset : 1; // offset 0x0
    uint8_t m_resetCycleOption : 3; // offset 0x0
    CAnimValue< float32 > m_blendDuration; // offset 0x8, size 0x8, align 4
    CAnimValue< float32 > m_resetCycleValue; // offset 0x10, size 0x8, align 4
    char _pad_0018[0x4]; // offset 0x18
};
