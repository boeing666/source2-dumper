#pragma once

class CBlendNodeInstanceData  // sizeof 0x30, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32 m_dampedValue; // offset 0x0, size 0x4, align 4
    float32 m_flCycle; // offset 0x4, size 0x4, align 4
    float32 m_flCycleZeroTime; // offset 0x8, size 0x4, align 4
    float32 m_flPlaybackRate; // offset 0xC, size 0x4, align 4
    CAnimNetVar< float32 > m_flBlendValue; // offset 0x10, size 0xC, align 4
    float32 m_flDuration; // offset 0x1C, size 0x4, align 4
    CAnimNetVar< uint8 > m_resetCount; // offset 0x20, size 0xC, align 4
    char _pad_002C[0x4]; // offset 0x2C
};
