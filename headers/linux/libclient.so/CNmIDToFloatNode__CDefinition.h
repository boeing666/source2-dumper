#pragma once

class CNmIDToFloatNode::CDefinition : public CNmFloatValueNode::CDefinition /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA]; // offset 0x0
    int16 m_nInputValueNodeIdx; // offset 0xA, size 0x2, align 2
    float32 m_defaultValue; // offset 0xC, size 0x4, align 4
    CUtlLeanVectorFixedGrowable< CGlobalSymbol, 5 > m_IDs; // offset 0x10, size 0x30, align 8
    CUtlLeanVectorFixedGrowable< float32, 5 > m_values; // offset 0x40, size 0x20, align 8
};
