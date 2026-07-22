#pragma once

class CVMixOscProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixOscDesc_t m_desc; // offset 0x20, size 0xC, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
