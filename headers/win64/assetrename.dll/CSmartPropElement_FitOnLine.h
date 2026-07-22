#pragma once

class CSmartPropElement_FitOnLine : public CSmartPropElement_Group /*0x0*/  // sizeof 0x2E0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeVector m_vStart; // offset 0xA0, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeVector m_vEnd; // offset 0xE0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_PointSpace; // offset 0x120, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bOrientAlongLine; // offset 0x160, size 0x40, align 8 | MPropertyStartGroup MPropertyDescription
    CSmartPropAttributeVector m_vUpDirection; // offset 0x1A0, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // offset 0x1E0, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeBool m_bPrioritizeUp; // offset 0x220, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeScaleMode m_nScaleMode; // offset 0x260, size 0x40, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributePickMode m_nPickMode; // offset 0x2A0, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
};
