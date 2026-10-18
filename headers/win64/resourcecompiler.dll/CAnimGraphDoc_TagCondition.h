#pragma once

class CAnimGraphDoc_TagCondition : public CAnimGraphDoc_Condition /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    AnimTagID m_tagID; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_comparisonValue; // offset 0x2C, size 0x1, align 1 | MPropertyFriendlyName
    bool m_latestValue; // offset 0x2D, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_002E[0x2]; // offset 0x2E
};
