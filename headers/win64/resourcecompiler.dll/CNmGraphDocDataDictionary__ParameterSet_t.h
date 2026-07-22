#pragma once

struct CNmGraphDocDataDictionary::ParameterSet_t  // sizeof 0x20, align 0x8 (animdoclib) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    CUtlVector< CNmGraphDocDataDictionary::Parameter_t > m_parameters; // offset 0x8, size 0x18, align 8 | MPropertyAutoExpandSelf
};
