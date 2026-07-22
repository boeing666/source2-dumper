#pragma once

class CMixSteamAudioSource : public CMixPropertyBase /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    SteamAudioHRTFInterpolationType_t m_nInterpolation; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDirectMixLevel; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bEnablePerspectiveCorrection; // offset 0x28, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bRelativePosition; // offset 0x29, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_002A[0x6]; // offset 0x2A
};
