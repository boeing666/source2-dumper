#pragma once

class CSmartPropElement_PlaceOnMesh : public CSmartPropElement_Deformer /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MVDataExperimentalNodeSet MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeOrientationMode m_nPickMode; // offset 0xA0, size 0x40, align 255 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CUtlString m_MeshName; // offset 0xE0, size 0x8, align 8 | MPropertyDescription
};
