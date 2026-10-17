#pragma once

class CSmartPropOperation_SetOrientation : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x190, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeVector m_vForwardVector; // offset 0x50, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeCoordinateSpace m_ForwardDirectionSpace; // offset 0x90, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
    CSmartPropAttributeVector m_vUpVector; // offset 0xD0, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // offset 0x110, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
    CSmartPropAttributeBool m_bPrioritizeUp; // offset 0x150, size 0x40, align 8 | MPropertyDescription
};
