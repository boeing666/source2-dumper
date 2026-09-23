#pragma once

class CVMixConvolutionProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixConvolutionDesc_t m_desc; // offset 0x28, size 0x20, align 4
    CVMixDataOffset m_paramImpulseResponse; // offset 0x48, size 0x4, align 255
    char _pad_004C[0x4]; // offset 0x4C
};
