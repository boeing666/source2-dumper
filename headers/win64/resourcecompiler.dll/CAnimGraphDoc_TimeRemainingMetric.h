#pragma once

class CAnimGraphDoc_TimeRemainingMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bMatchByTimeRemaining; // offset 0x28, size 0x1, align 1 | MPropertyFriendlyName MPropertyGroupName MPropertyAutoRebuildOnChange
    char _pad_0029[0x3]; // offset 0x29
    float32 m_flMaxTimeRemaining; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bFilterByTimeRemaining; // offset 0x30, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0031[0x3]; // offset 0x31
    float32 m_flMinTimeRemaining; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
};
