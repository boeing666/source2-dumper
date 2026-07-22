#pragma once

class CVSound  // sizeof 0x40, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    CUtlLeanVector< CAudioSentence > m_Sentences; // offset 0x0, size 0x10, align 8
    int32 m_nRate; // offset 0x10, size 0x4, align 4
    CVSoundFormat_t m_nFormat; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    uint32 m_nChannels; // offset 0x18, size 0x4, align 4
    int32 m_nLoopStart; // offset 0x1C, size 0x4, align 4
    uint32 m_nSampleCount; // offset 0x20, size 0x4, align 4
    float32 m_flDuration; // offset 0x24, size 0x4, align 4
    uint32 m_nStreamingSize; // offset 0x28, size 0x4, align 4
    int32 m_nLoopEnd; // offset 0x2C, size 0x4, align 4
    char _pad_0030[0x10]; // offset 0x30
};
