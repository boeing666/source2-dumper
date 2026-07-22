#pragma once

class CSmartPropElement_PlaceInSphere : public CSmartPropElement_Group /*0x0*/  // sizeof 0x320, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // offset 0xA0, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeDistributionMode m_DistributionMode; // offset 0xE0, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeFloat m_flRandomness; // offset 0x120, size 0x40, align 8 | MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeVector m_vPlaneUpDirection; // offset 0x160, size 0x40, align 8 | MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeInt m_nCountMin; // offset 0x1A0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeInt m_nCountMax; // offset 0x1E0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flPositionRadiusInner; // offset 0x220, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flPositionRadiusOuter; // offset 0x260, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bAlignOrientation; // offset 0x2A0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vAlignDirection; // offset 0x2E0, size 0x40, align 8 | MPropertyReadonlyExpr MPropertyDescription
};
