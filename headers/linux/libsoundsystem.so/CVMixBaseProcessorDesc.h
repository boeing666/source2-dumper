#pragma once

class CVMixBaseProcessorDesc  // sizeof 0x28, align 0xFF [vtable abstract] (soundsystem_lowlevel) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8
    uint32 m_nDebugId; // offset 0x10, size 0x4, align 4
    float32 m_flxfade; // offset 0x14, size 0x4, align 4
    int32 m_nChannels; // offset 0x18, size 0x4, align 4
    bool m_bDebugBypass; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    CVMixParameterFloat m_paramEnable; // offset 0x20, size 0x4, align 4
    CVMixParameterFloat m_paramMix; // offset 0x24, size 0x4, align 4
};
