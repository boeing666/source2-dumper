#pragma once

class CVMixBoxverbProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    VMixBoxverbDesc_t m_desc; // offset 0x28, size 0x50, align 4
};
