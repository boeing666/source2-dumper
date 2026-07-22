#pragma once

class CVoiceContainerEnum : public CVoiceContainerBase /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CSoundContainerReferenceArray m_soundsToPlay; // offset 0xA8, size 0x38, align 8 | MPropertyFriendlyName
    int32 m_iSelection; // offset 0xE0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCrossfadeTime; // offset 0xE4, size 0x4, align 4 | MPropertyFriendlyName
};
