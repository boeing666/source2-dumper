#pragma once

class CVMixPannerProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixPannerDesc_t m_desc; // offset 0x28, size 0x8, align 4
    CVMixParameterFloat m_paramPan; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
