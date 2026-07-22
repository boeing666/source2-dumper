#pragma once

class CVMixPlateReverbProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixPlateverbDesc_t m_desc; // offset 0x20, size 0x1C, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
