#pragma once

class CMixSteamAudioHybridReverb : public CMixPropertyBase /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flReverbTimeLow; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flReverbTimeMid; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flReverbTimeHigh; // offset 0x28, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< float32 > m_vecReverbTime; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeRange
};
