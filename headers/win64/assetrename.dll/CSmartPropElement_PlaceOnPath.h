#pragma once

class CSmartPropElement_PlaceOnPath : public CSmartPropElement_Group /*0x0*/  // sizeof 0x300, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CUtlString m_PathName; // offset 0xA0, size 0x8, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flSpacing; // offset 0xA8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flOffsetAlongPath; // offset 0xE8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector2D m_vPathOffset; // offset 0x128, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_PathSpace; // offset 0x168, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bUseFixedUpDirection; // offset 0x1A8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bUseProjectedDistance; // offset 0x1E8, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vUpDirection; // offset 0x228, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // offset 0x268, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeBool m_DefaultPathInWorldSpace; // offset 0x2A8, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlVector< CSmartPropAttributeVector > m_DefaultPath; // offset 0x2E8, size 0x18, align 8 | MPropertyDescription
};
