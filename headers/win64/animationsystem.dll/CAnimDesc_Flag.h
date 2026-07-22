#pragma once

class CAnimDesc_Flag  // sizeof 0x8, align 0x1 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    bool m_bLooping; // offset 0x0, size 0x1, align 1
    bool m_bAllZeros; // offset 0x1, size 0x1, align 1
    bool m_bHidden; // offset 0x2, size 0x1, align 1
    bool m_bDelta; // offset 0x3, size 0x1, align 1
    bool m_bLegacyWorldspace; // offset 0x4, size 0x1, align 1
    bool m_bModelDoc; // offset 0x5, size 0x1, align 1
    bool m_bImplicitSeqIgnoreDelta; // offset 0x6, size 0x1, align 1
    bool m_bAnimGraphAdditive; // offset 0x7, size 0x1, align 1
};
