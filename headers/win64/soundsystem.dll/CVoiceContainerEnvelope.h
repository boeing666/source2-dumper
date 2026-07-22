#pragma once

class CVoiceContainerEnvelope : public CVoiceContainerDefault /*0x0*/  // sizeof 0xB8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound; // offset 0xA8, size 0x8, align 8 | MPropertyFriendlyName
    CVoiceContainerAnalysisBase* m_analysisContainer; // offset 0xB0, size 0x8, align 8 | MPropertyFriendlyName
};
