#pragma once

class CVoiceContainerStaticAdditiveSynth::CHarmonic  // sizeof 0x68, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    EWaveform m_nWaveform; // offset 0x0, size 0x1, align 1 | MPropertyFriendlyName
    EMidiNote m_nFundamental; // offset 0x1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nOctave; // offset 0x4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCents; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flPhase; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    CPiecewiseCurve m_curve; // offset 0x10, size 0x40, align 8 | MPropertyFriendlyName
    CVoiceContainerStaticAdditiveSynth::CGainScalePerInstance m_volumeScaling; // offset 0x50, size 0x10, align 4
    char _pad_0060[0x8]; // offset 0x60
};
