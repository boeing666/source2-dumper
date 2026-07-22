#pragma once

class CFloatAnimValue  // sizeof 0x20, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flConstValue; // offset 0x8, size 0x4, align 4 | MPropertySuppressField
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_paramName; // offset 0x10, size 0x8, align 8 | MPropertySuppressField
    AnimParamID m_paramID; // offset 0x18, size 0x4, align 4 | MPropertySuppressField
    EAnimValueSource m_eSource; // offset 0x1C, size 0x4, align 4 | MPropertySuppressField
};
