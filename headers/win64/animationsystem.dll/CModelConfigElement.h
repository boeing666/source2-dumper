#pragma once

class CModelConfigElement  // sizeof 0x48, align 0xFF [vtable abstract] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_ElementName; // offset 0x8, size 0x8, align 8
    CUtlVector< CModelConfigElement* > m_NestedElements; // offset 0x10, size 0x18, align 8
    char _pad_0028[0x20]; // offset 0x28
};
