#pragma once

class CDirectionalBlendInstanceData  // sizeof 0x50, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32 m_dampedValue; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x10]; // offset 0x4
    float32 m_flCycle; // offset 0x14, size 0x4, align 4
    float32 m_flPrevCycle; // offset 0x18, size 0x4, align 4
    CAnimNetVar< float32 > m_flPlaybackRate; // offset 0x1C, size 0xC, align 4
    CAnimNetVar< float32 > m_flCycleZeroTime; // offset 0x28, size 0xC, align 4
    CAnimNetVar< float32 > m_resetCycleValue; // offset 0x34, size 0xC, align 4
    CAnimNetVar< float32 > m_resetCount; // offset 0x40, size 0xC, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
