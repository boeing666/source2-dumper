#pragma once

class CNmGraphDocParameterReferenceNode : public CNmGraphDocFlowNode /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (animdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    V_uuid_t m_parameterUUID; // offset 0x108, size 0x10, align 4
    NmGraphValueType_t m_parameterValueType; // offset 0x118, size 0x1, align 1
    char _pad_0119[0x7]; // offset 0x119
    CUtlString m_parameterName; // offset 0x120, size 0x8, align 8
    CUtlString m_parameterGroupName; // offset 0x128, size 0x8, align 8
};
