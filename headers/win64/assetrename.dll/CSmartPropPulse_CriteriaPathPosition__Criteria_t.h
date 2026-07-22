#pragma once

struct CSmartPropPulse_CriteriaPathPosition::Criteria_t  // sizeof 0x10, align 0xFF [trivial_dtor] (smartprops)
{
    SmartPropPathPositions_t m_PlaceAtPositions; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    int32 m_nPlaceEveryNthPosition; // offset 0x4, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    int32 m_nNthPositionIndexOffset; // offset 0x8, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    bool m_bAllowAtStart; // offset 0xC, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowAtEnd; // offset 0xD, size 0x1, align 1 | MPropertyDescription
    char _pad_000E[0x2]; // offset 0xE
};
