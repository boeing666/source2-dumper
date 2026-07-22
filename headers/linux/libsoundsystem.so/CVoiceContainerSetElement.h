#pragma once

class CVoiceContainerSetElement  // sizeof 0x28, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    CSoundContainerReference m_sound; // offset 0x0, size 0x20, align 8
    float32 m_flVolumeDB; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0024[0x4]; // offset 0x24
};
