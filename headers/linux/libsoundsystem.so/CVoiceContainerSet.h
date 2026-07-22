#pragma once

class CVoiceContainerSet : public CVoiceContainerBase /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x70]; // offset 0x0
    CUtlVector< CVoiceContainerSetElement > m_soundsToPlay; // offset 0x70, size 0x18, align 8 | MPropertyFriendlyName
    char _pad_0088[0x18]; // offset 0x88
};
