#pragma once

class CSmartPropVariable_MaterialGroup : public CSmartPropVariable /*0x0*/  // sizeof 0x120, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x38, size 0xE0, align 8 | MPropertyDescription MPropertyProvidesEditContextString
    CModelMaterialGroupName m_DefaultValue; // offset 0x118, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
};
