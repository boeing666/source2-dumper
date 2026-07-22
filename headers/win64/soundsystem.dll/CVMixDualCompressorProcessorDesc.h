#pragma once

class CVMixDualCompressorProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixDualCompressorDesc_t m_desc; // offset 0x20, size 0x34, align 4
    char _pad_0054[0x4]; // offset 0x54
};
