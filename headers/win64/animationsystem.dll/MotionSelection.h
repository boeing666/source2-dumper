#pragma once

class MotionSelection  // sizeof 0x58, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x24]; // offset 0x0
    NetVarConfigIndex m_nConfigIndex; // offset 0x24, size 0xC, align 4
    CAnimNetVar< float32 > m_flCycleZeroTime; // offset 0x30, size 0xC, align 4
    CAnimNetVar< float32 > m_flPlaybackSpeed; // offset 0x3C, size 0xC, align 4
    CAnimNetVar< float32 > m_flStartTime; // offset 0x48, size 0xC, align 4
    int32 m_nSample; // offset 0x54, size 0x4, align 4
};
