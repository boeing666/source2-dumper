#pragma once

class CAudioSentence  // sizeof 0xA0, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    bool m_bShouldVoiceDuck; // offset 0x0, size 0x1, align 1
    char _pad_0001[0x7]; // offset 0x1
    CUtlVector< CAudioPhonemeTag > m_RunTimePhonemes; // offset 0x8, size 0x18, align 8
    CUtlVector< CAudioEmphasisSample > m_EmphasisSamples; // offset 0x20, size 0x18, align 8
    CAudioMorphData m_morphData; // offset 0x38, size 0x68, align 8
};
