#pragma once

class CDistanceRemainingMetricEvaluator : public CMotionMetricEvaluator /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    float32 m_flMaxDistance; // offset 0x50, size 0x4, align 4
    float32 m_flMinDistance; // offset 0x54, size 0x4, align 4
    float32 m_flStartGoalFilterDistance; // offset 0x58, size 0x4, align 4
    float32 m_flMaxGoalOvershootScale; // offset 0x5C, size 0x4, align 4
    bool m_bFilterFixedMinDistance; // offset 0x60, size 0x1, align 1
    bool m_bFilterGoalDistance; // offset 0x61, size 0x1, align 1
    bool m_bFilterGoalOvershoot; // offset 0x62, size 0x1, align 1
    char _pad_0063[0x5]; // offset 0x63
};
