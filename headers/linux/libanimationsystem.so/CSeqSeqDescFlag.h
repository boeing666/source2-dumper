#pragma once

class CSeqSeqDescFlag  // sizeof 0xB, align 0x1 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    bool m_bLooping; // offset 0x0, size 0x1, align 1
    bool m_bSnap; // offset 0x1, size 0x1, align 1
    bool m_bAutoplay; // offset 0x2, size 0x1, align 1
    bool m_bPost; // offset 0x3, size 0x1, align 1
    bool m_bHidden; // offset 0x4, size 0x1, align 1
    bool m_bMulti; // offset 0x5, size 0x1, align 1
    bool m_bLegacyDelta; // offset 0x6, size 0x1, align 1
    bool m_bLegacyWorldspace; // offset 0x7, size 0x1, align 1
    bool m_bLegacyCyclepose; // offset 0x8, size 0x1, align 1
    bool m_bLegacyRealtime; // offset 0x9, size 0x1, align 1
    bool m_bModelDoc; // offset 0xA, size 0x1, align 1
};
