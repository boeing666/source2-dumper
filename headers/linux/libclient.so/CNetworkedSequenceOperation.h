#pragma once

class CNetworkedSequenceOperation  // sizeof 0x28, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    HSequence m_hSequence; // offset 0x8, size 0x4, align 255
    float32 m_flPrevCycle; // offset 0xC, size 0x4, align 4
    float32 m_flCycle; // offset 0x10, size 0x4, align 4
    CNetworkedQuantizedFloat m_flWeight; // offset 0x14, size 0x8, align 4
    bool m_bSequenceChangeNetworked; // offset 0x1C, size 0x1, align 1
    bool m_bDiscontinuity; // offset 0x1D, size 0x1, align 1
    char _pad_001E[0x2]; // offset 0x1E
    float32 m_flPrevCycleFromDiscontinuity; // offset 0x20, size 0x4, align 4
    float32 m_flPrevCycleForAnimEventDetection; // offset 0x24, size 0x4, align 4
};
