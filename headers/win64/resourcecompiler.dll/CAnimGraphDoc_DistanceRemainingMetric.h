#pragma once

class CAnimGraphDoc_DistanceRemainingMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flMaxDistance; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bFilterFixedMinDistance; // offset 0x2C, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_002D[0x3]; // offset 0x2D
    float32 m_flMinDistance; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bFilterGoalDistance; // offset 0x34, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0035[0x3]; // offset 0x35
    float32 m_flStartGoalFilterDistance; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bFilterGoalOvershoot; // offset 0x3C, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flMaxGoalOvershootScale; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0044[0x4]; // offset 0x44
};
