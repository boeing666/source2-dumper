#pragma once

class CModelConfigElement_RandomPick : public CModelConfigElement /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlVector< CUtlString > m_Choices; // offset 0x48, size 0x18, align 8
    CUtlVector< float32 > m_ChoiceWeights; // offset 0x60, size 0x18, align 8
    char _pad_0078[0x8]; // offset 0x78
};
