#pragma once

class CVMixDynamicsProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixDynamicsDesc_t m_desc; // offset 0x1C, size 0x30, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
