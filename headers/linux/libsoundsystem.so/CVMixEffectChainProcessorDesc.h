#pragma once

class CVMixEffectChainProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixEffectChainDesc_t m_desc; // offset 0x20, size 0x8, align 8
};
