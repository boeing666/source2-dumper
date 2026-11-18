#pragma once

class CVoiceContainerMultiBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    CSoundContainerReferenceArray m_soundsToPlay; // offset 0x78, size 0x38, align 8 | MPropertyFriendlyName
    float32 m_flBlendFactor; // offset 0xB0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCrossover; // offset 0xB4, size 0x4, align 4 | MPropertyFriendlyName
};
