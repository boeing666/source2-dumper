#pragma once

class CNmEntityAttributeEventBase : public CNmEvent /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (animlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_attributeName; // offset 0x20, size 0x8, align 8
    char _pad_0028[0x10]; // offset 0x28
};
