#pragma once

class CSmartPropVariable_Material : public CSmartPropVariable /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_DefaultValue; // offset 0x38, size 0xE0, align 8 | MPropertyFriendlyName
};
