#pragma once

class CVMixDiffusorProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixDiffusorDesc_t m_desc; // offset 0x28, size 0x10, align 4
};
