#pragma once

class CVoiceContainerMultiBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CSoundContainerReferenceArray m_soundsToPlay; // offset 0x70, size 0x38, align 8 | MPropertyFriendlyName
    float32 m_flBlendFactor; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCrossover; // offset 0xAC, size 0x4, align 4 | MPropertyFriendlyName
};
