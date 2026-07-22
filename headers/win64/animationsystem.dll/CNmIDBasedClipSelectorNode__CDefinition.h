#pragma once

class CNmIDBasedClipSelectorNode::CDefinition : public CNmClipReferenceNode::CDefinition /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlLeanVectorFixedGrowable< int16, 5 > m_optionNodeIndices; // offset 0x10, size 0x18, align 8
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_optionIDs; // offset 0x28, size 0x30, align 8
    int16 m_nParameterNodeIdx; // offset 0x58, size 0x2, align 2
    int16 m_nFallbackNodeIdx; // offset 0x5A, size 0x2, align 2
    bool m_bIgnoreInvalidOptions; // offset 0x5C, size 0x1, align 1
    char _pad_005D[0x3]; // offset 0x5D
};
