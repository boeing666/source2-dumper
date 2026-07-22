#pragma once

class CVoiceContainerDecayingSineWave : public CVoiceContainerGenerator /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    float32 m_flFrequency; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flDecayTime; // offset 0xAC, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
};
