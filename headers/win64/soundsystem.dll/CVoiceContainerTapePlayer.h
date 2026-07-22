#pragma once

class CVoiceContainerTapePlayer : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0xF8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    bool m_bShouldWraparound; // offset 0xB8, size 0x1, align 1
    char _pad_00B9[0x7]; // offset 0xB9
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sourceAudio; // offset 0xC0, size 0x8, align 8
    float32 m_flTapeSpeedAttackTime; // offset 0xC8, size 0x4, align 4
    float32 m_flTapeSpeedReleaseTime; // offset 0xCC, size 0x4, align 4
    char _pad_00D0[0x28]; // offset 0xD0
};
