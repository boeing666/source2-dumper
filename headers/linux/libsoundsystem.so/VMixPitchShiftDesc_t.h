#pragma once

struct VMixPitchShiftDesc_t  // sizeof 0x10, align 0x4 [trivial_ctor trivial_dtor] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
    int32 m_nGrainSampleCount; // offset 0x0, size 0x4, align 4
    float32 m_flPitchShift; // offset 0x4, size 0x4, align 4
    int32 m_nQuality; // offset 0x8, size 0x4, align 4
    int32 m_nProcType; // offset 0xC, size 0x4, align 4
};
