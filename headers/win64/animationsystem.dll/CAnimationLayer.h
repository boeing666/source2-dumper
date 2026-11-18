#pragma once

class CAnimationLayer  // sizeof 0x58, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CAnimNetVar< int32 > m_hSequence; // offset 0x0, size 0xC, align 4
    float32 m_flPrevCycle; // offset 0xC, size 0x4, align 4
    CAnimNetVar< float32 > m_flCycle; // offset 0x10, size 0xC, align 4
    CAnimNetVar< float32 > m_flWeight; // offset 0x1C, size 0xC, align 4
    CAnimNetVar< int32 > m_nOrder; // offset 0x28, size 0xC, align 4
    CAnimNetVar< bool > m_bDisableSequenceFadeOut; // offset 0x34, size 0xC, align 4
    bool m_bLooping; // offset 0x40, size 0x1, align 1
    char _pad_0041[0x3]; // offset 0x41
    int32 m_nFlags; // offset 0x44, size 0x4, align 4
    bool m_bSequenceFinished; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x3]; // offset 0x49
    float32 m_flKillRate; // offset 0x4C, size 0x4, align 4
    float32 m_flKillDelay; // offset 0x50, size 0x4, align 4
    int32 m_nPriority; // offset 0x54, size 0x4, align 4
};
