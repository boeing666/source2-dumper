#pragma once

struct VMixFlangerDesc_t  // sizeof 0x24, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    bool m_bPhaseInvert; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x3]; // offset 0x1
    float32 m_flGlideTime; // offset 0x4, size 0x4, align 4
    float32 m_flDelay; // offset 0x8, size 0x4, align 4
    float32 m_flOutputGain; // offset 0xC, size 0x4, align 4
    float32 m_flFeedbackGain; // offset 0x10, size 0x4, align 4
    float32 m_flFeedforwardGain; // offset 0x14, size 0x4, align 4
    float32 m_flModRate; // offset 0x18, size 0x4, align 4
    float32 m_flModDepth; // offset 0x1C, size 0x4, align 4
    bool m_bApplyAntialiasing; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x3]; // offset 0x21
};
