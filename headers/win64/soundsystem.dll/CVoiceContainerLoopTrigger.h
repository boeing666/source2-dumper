#pragma once

class CVoiceContainerLoopTrigger : public CVoiceContainerBase /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CSoundContainerReference m_sound; // offset 0xA8, size 0x20, align 8 | MPropertyFriendlyName
    float32 m_flRetriggerTimeMin; // offset 0xC8, size 0x4, align 4
    float32 m_flRetriggerTimeMax; // offset 0xCC, size 0x4, align 4
    float32 m_flFadeTime; // offset 0xD0, size 0x4, align 4
    bool m_bCrossFade; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x3]; // offset 0xD5
};
