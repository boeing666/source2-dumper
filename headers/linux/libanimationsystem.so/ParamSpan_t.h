#pragma once

struct ParamSpan_t  // sizeof 0x28, align 0x8 (animgraphlib) {MGetKV3ClassDefaults}
{
    CUtlVector< ParamSpanSample_t > m_samples; // offset 0x0, size 0x18, align 8
    CAnimParamHandle m_hParam; // offset 0x18, size 0x2, align 1
    AnimParamType_t m_eParamType; // offset 0x1A, size 0x1, align 1
    char _pad_001B[0x1]; // offset 0x1B
    float32 m_flStartCycle; // offset 0x1C, size 0x4, align 4
    float32 m_flEndCycle; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
