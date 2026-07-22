#pragma once

class CSmartPropElement_BendDeformer : public CSmartPropElement_Deformer /*0x0*/  // sizeof 0x260, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeBool m_bDeformationEnabled; // offset 0xA0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vOrigin; // offset 0xE0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeAngles m_vAngles; // offset 0x120, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vSize; // offset 0x160, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flBendAngle; // offset 0x1A0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flBendPoint; // offset 0x1E0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flBendRadius; // offset 0x220, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
};
