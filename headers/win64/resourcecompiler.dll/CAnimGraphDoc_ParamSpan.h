#pragma once

class CAnimGraphDoc_ParamSpan  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< CAnimGraphDoc_ParamSpanSample > m_samples; // offset 0x20, size 0x18, align 8
    CUtlString m_paramName; // offset 0x38, size 0x8, align 8 | MPropertyHideField
    AnimParamID m_id; // offset 0x40, size 0x4, align 4
    float32 m_flStartCycle; // offset 0x44, size 0x4, align 4
    float32 m_flEndCycle; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
