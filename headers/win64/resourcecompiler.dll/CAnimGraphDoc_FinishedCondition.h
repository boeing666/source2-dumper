#pragma once

class CAnimGraphDoc_FinishedCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    FinishedConditionOption m_option; // offset 0x28, size 0x4, align 4
    bool m_bIsFinished; // offset 0x2C, size 0x1, align 1
    char _pad_002D[0x3]; // offset 0x2D
};
