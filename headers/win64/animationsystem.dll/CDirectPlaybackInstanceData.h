#pragma once

class CDirectPlaybackInstanceData  // sizeof 0x148, align 0x8 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    Vector m_vTargetPosition; // offset 0x0, size 0xC, align 4
    float32 m_flTargetFacing; // offset 0xC, size 0x4, align 4
    float32 m_flInterpEndTime; // offset 0x10, size 0x4, align 4
    float32[4] m_weights; // offset 0x14, size 0x10, align 4
    SequenceData[4] m_sequences; // offset 0x24, size 0xE0, align 4
    uint32 m_currentSequenceIndex; // offset 0x104, size 0x4, align 4
    CAnimNetVar< uint64 > m_currentSequenceData; // offset 0x108, size 0x10, align 8
    float32 m_flFadeInTime; // offset 0x118, size 0x4, align 4
    float32 m_flFadeOutTime; // offset 0x11C, size 0x4, align 4
    CAnimNetVar< float32 > m_flForcedCycle; // offset 0x120, size 0xC, align 4
    char _pad_012C[0x4]; // offset 0x12C
    bool m_bResetPending; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x7]; // offset 0x131
    CAnimNetVar< float32 > m_SequenceCycleZeroTime; // offset 0x138, size 0xC, align 4
    char _pad_0144[0x4]; // offset 0x144
};
