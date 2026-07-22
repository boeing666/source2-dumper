#pragma once

class CVoiceContainerRandomSampler : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0x1A8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    float32 m_flAmplitude; // offset 0x80, size 0x4, align 4
    float32 m_flAmplitudeJitter; // offset 0x84, size 0x4, align 4
    float32 m_flTimeJitter; // offset 0x88, size 0x4, align 4
    float32 m_flMaxLength; // offset 0x8C, size 0x4, align 4
    int32 m_nNumDelayVariations; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    CUtlVector< CStrongHandle< InfoForResourceTypeCVoiceContainerBase > > m_grainResources; // offset 0x98, size 0x18, align 8
    char _pad_00B0[0xF8]; // offset 0xB0
};
