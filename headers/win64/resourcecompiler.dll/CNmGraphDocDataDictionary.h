#pragma once

class CNmGraphDocDataDictionary  // sizeof 0x30, align 0x8 (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
public:
    CUtlVector< CNmGraphDocDataDictionary::ParameterSet_t > m_parameterSets; // offset 0x0, size 0x18, align 8 | MPropertyAutoExpandSelf
    CUtlVector< CNmGraphDocDataDictionary::IDSet_t > m_IDSets; // offset 0x18, size 0x18, align 8 | MPropertyAutoExpandSelf
};
