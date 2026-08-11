#pragma once

struct CSmartPropPulse_SelectionLinearLength::Criteria_t  // sizeof 0x10, align 0xFF [trivial_dtor] (smartprops)
{
    float32 m_flLength; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    bool m_bAllowScale; // offset 0x4, size 0x1, align 1 | MPropertyDescription
    char _pad_0005[0x3]; // offset 0x5
    float32 m_flMinLength; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    float32 m_flMaxLength; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
};
