#pragma once

class CVMixDynamicsProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixDynamicsDesc_t m_desc; // offset 0x28, size 0x30, align 4
    CVMixParameterFloat m_outParamLevel; // offset 0x58, size 0x4, align 4
    CVMixParameterFloat m_outParamdBLevel; // offset 0x5C, size 0x4, align 4
};
