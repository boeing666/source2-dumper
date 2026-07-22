#pragma once

class CNmGraphDocTargetSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CUtlVector< CUtlString > m_optionLabels; // offset 0x100, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    float32 m_flOrientationScoreWeight; // offset 0x118, size 0x4, align 4
    float32 m_flPositionScoreWeight; // offset 0x11C, size 0x4, align 4
    bool m_bIsWorldSpaceTarget; // offset 0x120, size 0x1, align 1
    bool m_bIgnoreInvalidOptions; // offset 0x121, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_0122[0x6]; // offset 0x122
};
