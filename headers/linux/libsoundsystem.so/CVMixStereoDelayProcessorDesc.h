#pragma once

class CVMixStereoDelayProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CVMixParameterFloat m_paramDelayLeft; // offset 0x28, size 0x4, align 4
    CVMixParameterFloat m_paramDelayRight; // offset 0x2C, size 0x4, align 4
};
