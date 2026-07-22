#pragma once

class CAnimGraphDoc_StepsRemainingMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< CUtlString > m_feet; // offset 0x28, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoExpandSelf
    float32 m_flMinStepsRemaining; // offset 0x40, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0044[0x4]; // offset 0x44
};
