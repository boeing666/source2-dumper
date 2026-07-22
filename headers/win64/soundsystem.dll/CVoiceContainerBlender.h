#pragma once

class CVoiceContainerBlender : public CVoiceContainerBase /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CSoundContainerReference m_firstSound; // offset 0xA8, size 0x20, align 8
    CSoundContainerReference m_secondSound; // offset 0xC8, size 0x20, align 8
    float32 m_flBlendFactor; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x4]; // offset 0xEC
};
