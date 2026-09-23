#pragma once

class CSmartPropElement_ModelEntity : public CSmartPropElement /*0x0*/  // sizeof 0x190, align 0xFF [vtable abstract] (smartprops) {MGetKV3ClassDefaults MVDataOutlinerAssetNameExpr}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CSmartPropAttributeModelName m_sModelName; // offset 0x88, size 0x40, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CSmartPropAttributeMaterialGroup m_MaterialGroupName; // offset 0xC8, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bCastShadows; // offset 0x108, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bForceStatic; // offset 0x148, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    SmartPropDeformableAttachMode_t m_nDeformableAttachmentMode; // offset 0x188, size 0x4, align 4 | MPropertySortPriority MPropertySuppressExpr MPropertyFriendlyName MPropertyGroupName MPropertyDescription
    SmartPropDeformableOrientMode_t m_nDeformableOrientationMode; // offset 0x18C, size 0x4, align 4 | MPropertySortPriority MPropertySuppressExpr MPropertyGroupName MPropertyDescription
};
