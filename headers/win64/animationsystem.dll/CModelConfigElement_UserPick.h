#pragma once

class CModelConfigElement_UserPick : public CModelConfigElement /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CUtlString > m_Choices; // offset 0x48, size 0x18, align 8
};
