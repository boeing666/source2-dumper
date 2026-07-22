#pragma once

class CVoiceContainerSwitch : public CVoiceContainerBase /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA8]; // offset 0x0
    CUtlVector< CSoundContainerReference > m_soundsToPlay; // offset 0xA8, size 0x18, align 8 | MPropertyFriendlyName
};
