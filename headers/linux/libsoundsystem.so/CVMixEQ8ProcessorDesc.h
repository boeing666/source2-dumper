#pragma once

class CVMixEQ8ProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixEQ8Desc_t m_desc; // offset 0x28, size 0x80, align 4
    CVMixParameterFloat m_paramEQScale; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
};
