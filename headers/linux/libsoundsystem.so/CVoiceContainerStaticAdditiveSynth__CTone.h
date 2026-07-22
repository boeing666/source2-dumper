#pragma once

class CVoiceContainerStaticAdditiveSynth::CTone  // sizeof 0x60, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    CUtlVector< CVoiceContainerStaticAdditiveSynth::CHarmonic > m_harmonics; // offset 0x0, size 0x18, align 8 | MPropertyFriendlyName
    CPiecewiseCurve m_curve; // offset 0x18, size 0x40, align 8 | MPropertyFriendlyName
    bool m_bSyncInstances; // offset 0x58, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0059[0x7]; // offset 0x59
};
