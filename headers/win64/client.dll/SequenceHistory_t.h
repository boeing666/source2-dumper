#pragma once

struct SequenceHistory_t  // sizeof 0x18, align 0xFF [trivial_dtor] (client)
{
    HSequence m_hSequence; // offset 0x0, size 0x4, align 255
    GameTime_t m_flSeqStartTime; // offset 0x4, size 0x4, align 255
    float32 m_flSeqFixedCycle; // offset 0x8, size 0x4, align 4
    AnimLoopMode_t m_nSeqLoopMode; // offset 0xC, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0x10, size 0x4, align 4
    float32 m_flCyclesPerSecond; // offset 0x14, size 0x4, align 4
};
