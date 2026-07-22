#pragma once

class C_BaseAnimatingController : public CSkeletonAnimationController /*0x0*/  // sizeof 0x5E8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CNetworkedSequenceOperation m_baseLayer; // offset 0x10, size 0x28, align 8
    bool m_bSequenceFinished; // offset 0x38, size 0x1, align 1
    char _pad_0039[0x3]; // offset 0x39
    float32 m_flGroundSpeed; // offset 0x3C, size 0x4, align 4
    float32 m_flLastEventCycle; // offset 0x40, size 0x4, align 4
    GameTime_t m_flLastEventAnimTime; // offset 0x44, size 0x4, align 255
    float32 m_flSoundSyncTime; // offset 0x48, size 0x4, align 4
    CNetworkedQuantizedFloat m_flPlaybackRate; // offset 0x4C, size 0x8, align 4
    GameTime_t m_flPrevAnimTime; // offset 0x54, size 0x4, align 255
    GameTime_t m_flSeqStartTime; // offset 0x58, size 0x4, align 255
    float32[24] m_flPoseParameter; // offset 0x5C, size 0x60, align 4
    bool m_bNetworkedAnimationInputsChanged; // offset 0xBC, size 0x1, align 1
    uint8 m_nPrevNewSequenceParity; // offset 0xBD, size 0x1, align 1
    uint8 m_nPrevResetEventsParity; // offset 0xBE, size 0x1, align 1
    bool m_bPlaybackRateLocked; // offset 0xBF, size 0x1, align 1
    int32 m_nNewSequenceParity; // offset 0xC0, size 0x4, align 4
    int32 m_nResetEventsParity; // offset 0xC4, size 0x4, align 4
    AnimLoopMode_t m_nAnimLoopMode; // offset 0xC8, size 0x4, align 4
    float32 m_flCachedSequenceCycleRate; // offset 0xCC, size 0x4, align 4
    float32 m_flCachedGroundSpeed; // offset 0xD0, size 0x4, align 4
    SequenceFinishNotifyState_t m_nNotifyState; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x29B]; // offset 0xD5
    C_CSequenceTransitioner2 m_SequenceTransitioner; // offset 0x370, size 0x1B8, align 255
    HSequence m_hLastAnimEventSequence; // offset 0x528, size 0x4, align 255
    char _pad_052C[0xBC]; // offset 0x52C
};
