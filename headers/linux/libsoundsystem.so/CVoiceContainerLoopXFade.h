#pragma once

class CVoiceContainerLoopXFade : public CVoiceContainerBase /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CSoundContainerReference m_sound; // offset 0x70, size 0x20, align 8 | MPropertyFriendlyName
    float32 m_flLoopEnd; // offset 0x90, size 0x4, align 4
    float32 m_flLoopStart; // offset 0x94, size 0x4, align 4
    float32 m_flFadeOut; // offset 0x98, size 0x4, align 4
    float32 m_flFadeIn; // offset 0x9C, size 0x4, align 4
    bool m_bPlayHead; // offset 0xA0, size 0x1, align 1
    bool m_bPlayTail; // offset 0xA1, size 0x1, align 1
    bool m_bEqualPow; // offset 0xA2, size 0x1, align 1
    char _pad_00A3[0x5]; // offset 0xA3
};
