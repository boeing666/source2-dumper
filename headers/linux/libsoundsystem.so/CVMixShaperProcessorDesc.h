#pragma once

class CVMixShaperProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixShaperDesc_t m_desc; // offset 0x28, size 0x14, align 4
    CVMixParameterFloat m_paramDrive; // offset 0x3C, size 0x4, align 4
};
