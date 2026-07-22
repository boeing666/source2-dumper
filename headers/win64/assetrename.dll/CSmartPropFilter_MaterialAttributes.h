#pragma once

class CSmartPropFilter_MaterialAttributes : public CSmartPropFilter /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlVector< CUtlString > m_AllowedMaterialAttributes; // offset 0x50, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_DisallowedMaterialAttributes; // offset 0x68, size 0x18, align 8 | MPropertyDescription
};
