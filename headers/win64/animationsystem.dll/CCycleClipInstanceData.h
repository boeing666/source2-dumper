#pragma once

class CCycleClipInstanceData  // sizeof 0x1C, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CAnimNetVar< float32 > m_flCycle; // offset 0x0, size 0xC, align 4
    CAnimNetVar< float32 > m_flPrevCycle; // offset 0xC, size 0xC, align 4
    char _pad_0018[0x4]; // offset 0x18
};
