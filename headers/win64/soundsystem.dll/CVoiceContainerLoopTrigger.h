#pragma once

class CVoiceContainerLoopTrigger : public CVoiceContainerBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    float32 m_flRetriggerTimeMin; // offset 0x70, size 0x4, align 4
    float32 m_flRetriggerTimeMax; // offset 0x74, size 0x4, align 4
    float32 m_flFadeTime; // offset 0x78, size 0x4, align 4
    bool m_bCrossFade; // offset 0x7C, size 0x1, align 1
    char _pad_007D[0x3]; // offset 0x7D
    CSoundContainerReference m_sound; // offset 0x80, size 0x20, align 8 | MPropertyFriendlyName
};
