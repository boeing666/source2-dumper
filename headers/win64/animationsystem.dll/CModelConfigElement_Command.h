#pragma once

class CModelConfigElement_Command : public CModelConfigElement /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_Command; // offset 0x48, size 0x8, align 8
    KeyValues3 m_Args; // offset 0x50, size 0x10, align 8
};
