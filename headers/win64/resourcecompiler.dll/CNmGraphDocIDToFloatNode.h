#pragma once

class CNmGraphDocIDToFloatNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    float32 m_defaultValue; // offset 0x108, size 0x4, align 4
    char _pad_010C[0x4]; // offset 0x10C
    CUtlVector< CNmGraphDocIDToFloatNode::Mapping_t > m_mappings; // offset 0x110, size 0x18, align 8 | MPropertyAutoExpandSelf
};
