#pragma once

class CVSound  // sizeof 0x78, align 0x8 (soundsystem_voicecontainers) {MGetKV3ClassDefaults}
{
public:
    int32 m_nRate; // offset 0x0, size 0x4, align 4
    CVSoundFormat_t m_nFormat; // offset 0x4, size 0x1, align 1
    char _pad_0005[0x3]; // offset 0x5
    uint32 m_nChannels; // offset 0x8, size 0x4, align 4
    int32 m_nLoopStart; // offset 0xC, size 0x4, align 4
    uint32 m_nSampleCount; // offset 0x10, size 0x4, align 4
    float32 m_flDuration; // offset 0x14, size 0x4, align 4
    CUtlVector< CAudioSentence > m_Sentences; // offset 0x18, size 0x18, align 8
    uint32 m_nStreamingSize; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    CUtlVector< int32 > m_nSeekTable; // offset 0x38, size 0x18, align 8
    int32 m_nLoopEnd; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
    CUtlBinaryBlock m_encodedHeader; // offset 0x58, size 0x10, align 8 | MFgdFromSchemaCompletelySkipField
    char _pad_0068[0x10]; // offset 0x68
};
