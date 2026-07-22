#pragma once

class CSmartPropElement_Model : public CSmartPropElement /*0x0*/  // sizeof 0x310, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataOutlinerAssetNameExpr}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CSmartPropAttributeModelName m_sModelName; // offset 0x88, size 0x40, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CSmartPropAttributeMaterialGroup m_MaterialGroupName; // offset 0xC8, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bDetailObject; // offset 0x108, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vModelScale; // offset 0x148, size 0x40, align 8 | MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeFloat m_flUniformModelScale; // offset 0x188, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeInt m_nLodLevel; // offset 0x1C8, size 0x40, align 8 | MPropertyAttributeEditor MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeSurfaceProperty m_SurfacePropertyOverride; // offset 0x208, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    SmartPropDetailFadeLevel_t m_nDetailObjectFadeLevel; // offset 0x248, size 0x4, align 4 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    char _pad_024C[0x4]; // offset 0x24C
    CSmartPropAttributeBool m_bCastShadows; // offset 0x250, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bRigidDeformation; // offset 0x290, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeBool m_bDisableDynamicDeformable; // offset 0x2D0, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
};
