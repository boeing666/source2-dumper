#pragma once

struct VMixDelayDesc_t  // sizeof 0x28, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    VMixFilterDesc_t m_feedbackFilter; // offset 0x0, size 0x10, align 4
    bool m_bEnableFilter; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    float32 m_flDelay; // offset 0x14, size 0x4, align 4
    float32 m_flDirectGain; // offset 0x18, size 0x4, align 4
    float32 m_flDelayGain; // offset 0x1C, size 0x4, align 4
    float32 m_flFeedbackGain; // offset 0x20, size 0x4, align 4
    float32 m_flWidth; // offset 0x24, size 0x4, align 4
};
