#pragma once

class CVMixSubgraphSwitchProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x68, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixSubgraphSwitchDesc_t m_desc; // offset 0x28, size 0x38, align 8
    CVMixParameterEffectName m_paramEffectName; // offset 0x60, size 0x4, align 4
    CVMixParameterFloat m_paramSelectionIndex; // offset 0x64, size 0x4, align 4
};
