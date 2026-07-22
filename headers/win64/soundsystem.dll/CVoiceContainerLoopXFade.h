#pragma once

class CVoiceContainerLoopXFade : public CVoiceContainerBase /*0x0*/  // sizeof 0xE0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CSoundContainerReference m_sound; // offset 0xA8, size 0x20, align 8 | MPropertyFriendlyName
    float32 m_flLoopEnd; // offset 0xC8, size 0x4, align 4
    float32 m_flLoopStart; // offset 0xCC, size 0x4, align 4
    float32 m_flFadeOut; // offset 0xD0, size 0x4, align 4
    float32 m_flFadeIn; // offset 0xD4, size 0x4, align 4
    bool m_bPlayHead; // offset 0xD8, size 0x1, align 1
    bool m_bPlayTail; // offset 0xD9, size 0x1, align 1
    bool m_bEqualPow; // offset 0xDA, size 0x1, align 1
    char _pad_00DB[0x5]; // offset 0xDB
};
