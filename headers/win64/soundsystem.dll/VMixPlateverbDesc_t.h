#pragma once

struct VMixPlateverbDesc_t  // sizeof 0x1C, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flPrefilter; // offset 0x0, size 0x4, align 4
    float32 m_flInputDiffusion1; // offset 0x4, size 0x4, align 4
    float32 m_flInputDiffusion2; // offset 0x8, size 0x4, align 4
    float32 m_flDecay; // offset 0xC, size 0x4, align 4
    float32 m_flDamp; // offset 0x10, size 0x4, align 4
    float32 m_flFeedbackDiffusion1; // offset 0x14, size 0x4, align 4
    float32 m_flFeedbackDiffusion2; // offset 0x18, size 0x4, align 4
};
