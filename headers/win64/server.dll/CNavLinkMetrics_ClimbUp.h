#pragma once

class CNavLinkMetrics_ClimbUp  // sizeof 0x14, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    float32 m_flEntryDistance; // offset 0x0, size 0x4, align 4
    CRangeFloat m_horizontalRange; // offset 0x4, size 0x8, align 255
    CRangeFloat m_verticalRange; // offset 0xC, size 0x8, align 255
};
