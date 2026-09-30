#pragma once

class CFootAdjustmentInstanceData  // sizeof 0x48, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    CAnimNetVar< float32 > m_flStartTime; // offset 0xC, size 0xC, align 4
    CAnimNetVar< float32 > m_flDuration; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x18]; // offset 0x24
    float32 m_flStartHeadingWS; // offset 0x3C, size 0x4, align 4
    char _pad_0040[0x8]; // offset 0x40
};
