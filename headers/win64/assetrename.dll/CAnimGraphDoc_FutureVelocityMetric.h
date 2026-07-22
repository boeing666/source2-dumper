#pragma once

class CAnimGraphDoc_FutureVelocityMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flDistance; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStoppingDistance; // offset 0x2C, size 0x4, align 4 | MPropertyFriendlyName
    VelocityMetricMode m_eMode; // offset 0x30, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    bool m_bAutoTargetSpeed; // offset 0x31, size 0x1, align 1 | MPropertyFriendlyName MPropertyAutoRebuildOnChange MPropertyAttrStateCallback
    char _pad_0032[0x2]; // offset 0x32
    float32 m_flManualTargetSpeed; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
};
