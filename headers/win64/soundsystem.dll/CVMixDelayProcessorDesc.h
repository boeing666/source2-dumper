#pragma once

class CVMixDelayProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixDelayDesc_t m_desc; // offset 0x20, size 0x28, align 4
};
