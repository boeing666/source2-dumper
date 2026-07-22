#pragma once

class CVoiceContainerRandomSampler : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0x1E0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    float32 m_flAmplitude; // offset 0xB8, size 0x4, align 4
    float32 m_flAmplitudeJitter; // offset 0xBC, size 0x4, align 4
    float32 m_flTimeJitter; // offset 0xC0, size 0x4, align 4
    float32 m_flMaxLength; // offset 0xC4, size 0x4, align 4
    int32 m_nNumDelayVariations; // offset 0xC8, size 0x4, align 4
    char _pad_00CC[0x4]; // offset 0xCC
    CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // offset 0xD0, size 0x18, align 8
    char _pad_00E8[0xF8]; // offset 0xE8
};
