#pragma once

class CVMixDynamicsCompressorProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    VMixDynamicsCompressorDesc_t m_desc; // offset 0x20, size 0x24, align 4
    char _pad_0044[0x4]; // offset 0x44
};
