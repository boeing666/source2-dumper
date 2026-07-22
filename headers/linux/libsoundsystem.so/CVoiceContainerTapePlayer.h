#pragma once

class CVoiceContainerTapePlayer : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    bool m_bShouldWraparound; // offset 0x80, size 0x1, align 1
    char _pad_0081[0x7]; // offset 0x81
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // offset 0x88, size 0x8, align 8
    float32 m_flTapeSpeedAttackTime; // offset 0x90, size 0x4, align 4
    float32 m_flTapeSpeedReleaseTime; // offset 0x94, size 0x4, align 4
    char _pad_0098[0x28]; // offset 0x98
};
