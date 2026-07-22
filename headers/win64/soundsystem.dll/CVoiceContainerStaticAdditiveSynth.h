#pragma once

class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0xB0, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones; // offset 0x80, size 0x18, align 8
    char _pad_0098[0x18]; // offset 0x98
};
