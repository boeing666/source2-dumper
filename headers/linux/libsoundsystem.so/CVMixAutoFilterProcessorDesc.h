#pragma once

class CVMixAutoFilterProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixAutoFilterDesc_t m_desc; // offset 0x1C, size 0x2C, align 4
};
