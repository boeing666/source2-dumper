#pragma once

class CVoiceContainerStaticAdditiveSynth : public CVoiceContainerAsyncGenerator /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (soundsystem_voicecontainers) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xB8]; // offset 0x0
    CUtlVector< CVoiceContainerStaticAdditiveSynth::CTone > m_tones; // offset 0xB8, size 0x18, align 8
    char _pad_00D0[0x18]; // offset 0xD0
};
