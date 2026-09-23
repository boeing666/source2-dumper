#pragma once

class CNmGraphDocTargetSelectorNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x208]; // offset 0x0
    CUtlVector< CUtlString > m_optionLabels; // offset 0x208, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flOrientationScoreWeight; // offset 0x220, size 0x4, align 4
    float32 m_flPositionScoreWeight; // offset 0x224, size 0x4, align 4
    bool m_bIsWorldSpaceTarget; // offset 0x228, size 0x1, align 1
    bool m_bIgnoreInvalidOptions; // offset 0x229, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_022A[0x6]; // offset 0x22A
};
