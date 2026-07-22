#pragma once

class CNmGraphDocIDSelectorNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x100]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_options; // offset 0x100, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyResizable MPropertyAttributeEditor
    CGlobalSymbol m_defaultID; // offset 0x118, size 0x8, align 8 | MPropertyAttributeEditor
};
