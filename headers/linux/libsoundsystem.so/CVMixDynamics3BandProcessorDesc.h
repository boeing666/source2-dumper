#pragma once

class CVMixDynamics3BandProcessorDesc : public CVMixBaseProcessorDesc /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1C]; // offset 0x0
    VMixDynamics3BandDesc_t m_desc; // offset 0x1C, size 0x90, align 4
    char _pad_00AC[0x4]; // offset 0xAC
};
