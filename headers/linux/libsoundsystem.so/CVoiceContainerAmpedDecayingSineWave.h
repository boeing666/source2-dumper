#pragma once

class CVoiceContainerAmpedDecayingSineWave : public CVoiceContainerDecayingSineWave /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    float32 m_flGainAmount; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_007C[0x4]; // offset 0x7C
};
