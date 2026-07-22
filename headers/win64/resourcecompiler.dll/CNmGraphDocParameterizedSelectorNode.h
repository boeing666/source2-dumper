#pragma once

class CNmGraphDocParameterizedSelectorNode : public CNmGraphDocVariationDataNode /*0x0*/  // sizeof 0x220, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x200]; // offset 0x0
    CUtlVector< CUtlString > m_optionLabels; // offset 0x200, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable
    bool m_bIgnoreInvalidOptions; // offset 0x218, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_0219[0x7]; // offset 0x219
};
