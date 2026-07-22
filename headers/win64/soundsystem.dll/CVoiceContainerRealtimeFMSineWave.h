#pragma once

class CVoiceContainerRealtimeFMSineWave : public CVoiceContainerGenerator /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    float32 m_flCarrierFrequency; // offset 0xA8, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flModulatorFrequency; // offset 0xAC, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    float32 m_flModulatorAmount; // offset 0xB0, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_00B4[0x4]; // offset 0xB4
};
