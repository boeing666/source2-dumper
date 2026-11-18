#pragma once

class CVoiceContainerReference : public CVoiceContainerBase /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCVoiceContainerBase > m_sound; // offset 0x78, size 0x8, align 8 | MPropertyFriendlyName
};
