#pragma once

class CVMixFlangerProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixFlangerDesc_t m_desc; // offset 0x28, size 0x24, align 4
    CVMixParameterFloat m_paramDelay; // offset 0x4C, size 0x4, align 4
    CVMixParameterFloat m_paramModRate; // offset 0x50, size 0x4, align 4
    CVMixParameterFloat m_paramModDepth; // offset 0x54, size 0x4, align 4
};
