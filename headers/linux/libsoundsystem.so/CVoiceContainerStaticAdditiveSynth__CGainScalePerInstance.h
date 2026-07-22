#pragma once

class CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance  // sizeof 0x10, align 0x4 [trivial_dtor] (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    float32 m_flMinVolume; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInstancesAtMinVolume; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxVolume; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInstancesAtMaxVolume; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
};
