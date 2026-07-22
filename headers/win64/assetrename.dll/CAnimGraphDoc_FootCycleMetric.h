#pragma once

class CAnimGraphDoc_FootCycleMetric : public CAnimGraphDoc_MotionMetric /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlVector< CUtlString > m_feet; // offset 0x28, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName MPropertyAutoExpandSelf
};
