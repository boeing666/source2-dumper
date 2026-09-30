#pragma once

class CNavLinkMetrics_Base  // sizeof 0x18, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    std::optional< CRangeFloat > m_horizontalRange; // offset 0x0, size 0xC, align 4
    std::optional< CRangeFloat > m_verticalRange; // offset 0xC, size 0xC, align 4
};
