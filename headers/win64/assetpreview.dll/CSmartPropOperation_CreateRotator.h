#pragma once

class CSmartPropOperation_CreateRotator : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x320, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_Name; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vOffset; // offset 0x58, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vRotationAxis; // offset 0x98, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // offset 0xD8, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeFloat m_flDisplayRadius; // offset 0x118, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeColor m_DisplayColor; // offset 0x158, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bApplyToCurrentTransform; // offset 0x198, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flSnappingIncrement; // offset 0x1D8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flInitialAngle; // offset 0x218, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bEnforceLimits; // offset 0x258, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flMinAngle; // offset 0x298, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flMaxAngle; // offset 0x2D8, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyFriendlyName MPropertyDescription
    CUtlString m_OutputVariable; // offset 0x318, size 0x8, align 8 | MPropertyAttributeEditor MPropertyDescription
};
