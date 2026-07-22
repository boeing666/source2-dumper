#pragma once

struct VMixBoxverbDesc_t  // sizeof 0x50, align 0x4 [trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    float32 m_flSizeMax; // offset 0x0, size 0x4, align 4
    float32 m_flSizeMin; // offset 0x4, size 0x4, align 4
    float32 m_flComplexity; // offset 0x8, size 0x4, align 4
    float32 m_flDiffusion; // offset 0xC, size 0x4, align 4
    float32 m_flModDepth; // offset 0x10, size 0x4, align 4
    float32 m_flModRate; // offset 0x14, size 0x4, align 4
    bool m_bParallel; // offset 0x18, size 0x1, align 1
    char _pad_0019[0x3]; // offset 0x19
    VMixFilterDesc_t m_filterType; // offset 0x1C, size 0x10, align 4
    float32 m_flWidth; // offset 0x2C, size 0x4, align 4
    float32 m_flHeight; // offset 0x30, size 0x4, align 4
    float32 m_flDepth; // offset 0x34, size 0x4, align 4
    float32 m_flFeedbackScale; // offset 0x38, size 0x4, align 4
    float32 m_flFeedbackWidth; // offset 0x3C, size 0x4, align 4
    float32 m_flFeedbackHeight; // offset 0x40, size 0x4, align 4
    float32 m_flFeedbackDepth; // offset 0x44, size 0x4, align 4
    float32 m_flOutputGain; // offset 0x48, size 0x4, align 4
    float32 m_flTaps; // offset 0x4C, size 0x4, align 4
};
