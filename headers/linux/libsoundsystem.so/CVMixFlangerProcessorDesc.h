#pragma once

class CVMixFlangerProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixFlangerDesc_t m_desc; // offset 0x1C, size 0x24, align 4
};
