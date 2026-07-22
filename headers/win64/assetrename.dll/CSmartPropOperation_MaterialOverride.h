#pragma once

class CSmartPropOperation_MaterialOverride : public CSmartPropOperation /*0x0*/  // sizeof 0xA8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeBool m_bClearCurrentOverrides; // offset 0x50, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlVector< CSmartPropMaterialReplacement > m_MaterialReplacements; // offset 0x90, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyFriendlyName MPropertyDescription
};
