#pragma once

class CVMixDynamicsCompressorProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixDynamicsCompressorDesc_t m_desc; // offset 0x28, size 0x28, align 4
    CVMixParameterFloat m_outParamLevel; // offset 0x50, size 0x4, align 4
    CVMixParameterFloat m_outParamdBLevel; // offset 0x54, size 0x4, align 4
    CVMixParameterFloat m_outParamReduction; // offset 0x58, size 0x4, align 4
    char _pad_005C[0x4]; // offset 0x5C
};
