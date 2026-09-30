#pragma once

class CVMixEQ8ProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixEQ8Desc_t m_desc; // offset 0x28, size 0xA0, align 4
    CVMixParameterFloat m_paramEQScale; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x4]; // offset 0xCC
};
