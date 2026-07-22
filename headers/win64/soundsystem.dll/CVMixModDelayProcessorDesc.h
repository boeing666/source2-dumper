#pragma once

class CVMixModDelayProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixModDelayDesc_t m_desc; // offset 0x20, size 0x30, align 4
};
