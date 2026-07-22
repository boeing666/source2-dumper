#pragma once

class CVMixBoxverb2ProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixBoxverbDesc_t m_desc; // offset 0x1C, size 0x50, align 4
    char _pad_006C[0x4]; // offset 0x6C
};
