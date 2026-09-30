#pragma once

class CVoiceContainerSelector : public CVoiceContainerBase /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    PlayBackMode_t m_mode; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0074[0x4]; // offset 0x74
    CSoundContainerReferenceArray m_soundsToPlay; // offset 0x78, size 0x38, align 8 | MPropertyFriendlyName
    CUtlVector< float32 > m_fProbabilityWeights; // offset 0xB0, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_00C8[0x20]; // offset 0xC8
};
