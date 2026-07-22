#pragma once

class CTimeRemainingMetricEvaluator : public CMotionMetricEvaluator /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    bool m_bMatchByTimeRemaining; // offset 0x50, size 0x1, align 1
    char _pad_0051[0x3]; // offset 0x51
    float32 m_flMaxTimeRemaining; // offset 0x54, size 0x4, align 4
    bool m_bFilterByTimeRemaining; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flMinTimeRemaining; // offset 0x5C, size 0x4, align 4
};
