#pragma once

class CNetworkedCycle  // sizeof 0x34, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flCycleUnclamped; // offset 0x0, size 0x4, align 4
    float32 m_flPrevCycleUnclamped; // offset 0x4, size 0x4, align 4
    char _pad_0008[0x8]; // offset 0x8
    CAnimNetVar< float32 > m_flCyclesPerSecond; // offset 0x10, size 0xC, align 4
    CAnimNetVar< float32 > m_flCycleZeroTime; // offset 0x1C, size 0xC, align 4
    CAnimNetVar< uint8 > m_resetCount; // offset 0x28, size 0xC, align 4
};
