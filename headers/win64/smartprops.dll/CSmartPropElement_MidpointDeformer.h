#pragma once

class CSmartPropElement_MidpointDeformer : public CSmartPropElement_Deformer /*0x0*/  // sizeof 0x2E8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeBool m_bDeformationEnabled; // offset 0xA0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vStart; // offset 0xE0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vEnd; // offset 0x120, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_fRadius; // offset 0x160, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bContinuousSpline; // offset 0x1A0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector m_vOffset; // offset 0x1E0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeAngles m_vAngles; // offset 0x220, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeVector2D m_vScale; // offset 0x260, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_fFalloff; // offset 0x2A0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlString m_OutputVariable; // offset 0x2E0, size 0x8, align 8 | MPropertyAttributeEditor MPropertyDescription
};
