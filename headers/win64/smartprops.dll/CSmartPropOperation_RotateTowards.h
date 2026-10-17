#pragma once

class CSmartPropOperation_RotateTowards : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup MVDataExperimentalNodeSet}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeVector m_vOriginPos; // offset 0x50, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vTargetPos; // offset 0x90, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vUpPos; // offset 0xD0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flWeight; // offset 0x110, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_OriginSpace; // offset 0x150, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_TargetSpace; // offset 0x190, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_UpSpace; // offset 0x1D0, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
};
