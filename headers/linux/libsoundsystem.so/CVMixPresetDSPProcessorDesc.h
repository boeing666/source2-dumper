#pragma once

class CVMixPresetDSPProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixPresetDSPDesc_t m_desc; // offset 0x28, size 0x10, align 8
    CVMixParameterEffectName m_paramEffectName; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
