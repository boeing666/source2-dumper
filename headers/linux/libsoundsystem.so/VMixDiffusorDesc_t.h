#pragma once

struct VMixDiffusorDesc_t  // sizeof 0x10, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flSize; // offset 0x0, size 0x4, align 4
    float32 m_flComplexity; // offset 0x4, size 0x4, align 4
    float32 m_flFeedback; // offset 0x8, size 0x4, align 4
    float32 m_flOutputGain; // offset 0xC, size 0x4, align 4
};
