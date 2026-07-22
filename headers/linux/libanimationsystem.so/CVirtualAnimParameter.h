#pragma once

class CVirtualAnimParameter : public CAnimParameterBase /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlString m_expressionString; // offset 0x70, size 0x8, align 8
    AnimParamType_t m_eParamType; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x7]; // offset 0x79
};
