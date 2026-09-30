#pragma once

class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerGenerator /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    float32 m_flCarrierFrequency; // offset 0x70, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flModulatorFrequency; // offset 0x74, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flModulatorAmount; // offset 0x78, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_007C[0x4]; // offset 0x7C
};
