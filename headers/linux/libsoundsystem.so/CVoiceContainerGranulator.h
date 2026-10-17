#pragma once

class CVoiceContainerGranulator : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0x170, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    float32 m_flGrainLength; // offset 0x80, size 0x4, align 4
    float32 m_flGrainCrossfadeAmount; // offset 0x84, size 0x4, align 4
    float32 m_flStartJitter; // offset 0x88, size 0x4, align 4
    float32 m_flPlaybackJitter; // offset 0x8C, size 0x4, align 4
    bool m_bShouldWraparound; // offset 0x90, size 0x1, align 1
    char _pad_0091[0x7]; // offset 0x91
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // offset 0x98, size 0x8, align 8
    bool m_bDoubleBufferSourceAudio; // offset 0xA0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_00A1[0x3]; // offset 0xA1
    float32 m_flMaxSourceLength; // offset 0xA4, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_00A8[0xC8]; // offset 0xA8
};
