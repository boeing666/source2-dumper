#pragma once

class CVMixEffectChainProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixEffectChainDesc_t m_desc; // offset 0x28, size 0x8, align 8
    CVMixParameterEffectName m_paramEffectName; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
