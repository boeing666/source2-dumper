#pragma once

class CVoiceContainerSelector : public CVoiceContainerBase /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    PlayBackMode_t m_mode; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_00AC[0x4]; // offset 0xAC
    CSoundContainerReferenceArray m_soundsToPlay; // offset 0xB0, size 0x38, align 8 | MPropertyFriendlyName
    CUtlVector< float32 > m_fProbabilityWeights; // offset 0xE8, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0100[0x20]; // offset 0x100
};
