#pragma once

class CAnimationLayer  // sizeof 0xA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CNetworkedSequenceOperation m_op; // offset 0x30, size 0x28, align 8
    int32 m_nOrder; // offset 0x58, size 0x4, align 4
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0x5C, size 0x8, align 4
    AnimLoopMode_t m_nSeqLoopMode; // offset 0x64, size 0x4, align 4
    int32 m_nNewSequenceParity; // offset 0x68, size 0x4, align 4
    GameTime_t m_flSeqStartTime; // offset 0x6C, size 0x4, align 255
    float32 m_flCachedSequenceCycleRate; // offset 0x70, size 0x4, align 4
    int32 m_nFlags; // offset 0x74, size 0x4, align 4
    bool m_bSequenceFinished; // offset 0x78, size 0x1, align 1
    char _pad_0079[0x3]; // offset 0x79
    GameTime_t m_flKillStartTime; // offset 0x7C, size 0x4, align 255
    float32 m_flKillRate; // offset 0x80, size 0x4, align 4
    GameTime_t m_flLayerSuppressChangeTime; // offset 0x84, size 0x4, align 255
    int32 m_nActivity; // offset 0x88, size 0x4, align 4 | MKV3TransferSaveOpsForField
    int32 m_nPriority; // offset 0x8C, size 0x4, align 4
    float32 m_flLastEventCycle; // offset 0x90, size 0x4, align 4
    float32 m_flFadeInFraction; // offset 0x94, size 0x4, align 4
    float32 m_flFadeOutFraction; // offset 0x98, size 0x4, align 4
    bool m_bHasFadedIn; // offset 0x9C, size 0x1, align 1
    char _pad_009D[0xB]; // offset 0x9D
};
