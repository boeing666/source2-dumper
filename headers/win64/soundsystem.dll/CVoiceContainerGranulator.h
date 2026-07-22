#pragma once

class CVoiceContainerGranulator : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0x190, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    float32 m_flGrainLength; // offset 0xB8, size 0x4, align 4
    float32 m_flGrainCrossfadeAmount; // offset 0xBC, size 0x4, align 4
    float32 m_flStartJitter; // offset 0xC0, size 0x4, align 4
    float32 m_flPlaybackJitter; // offset 0xC4, size 0x4, align 4
    bool m_bShouldWraparound; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x7]; // offset 0xC9
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // offset 0xD0, size 0x8, align 8
    char _pad_00D8[0xB8]; // offset 0xD8
};
