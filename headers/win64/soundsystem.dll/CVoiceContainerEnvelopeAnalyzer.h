#pragma once

class CVoiceContainerEnvelopeAnalyzer : public CVoiceContainerAnalysisBase /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    EMode_t m_mode; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fAnalysisWindowMs; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flThreshold; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_005C[0x4]; // offset 0x5C
};
