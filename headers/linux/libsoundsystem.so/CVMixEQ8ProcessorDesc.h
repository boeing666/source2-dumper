#pragma once

class CVMixEQ8ProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixEQ8Desc_t m_desc; // offset 0x1C, size 0x80, align 4
    char _pad_009C[0x4]; // offset 0x9C
};
