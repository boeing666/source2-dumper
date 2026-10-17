#pragma once

class CSmartPropMaterialReplacement  // sizeof 0x80, align 0x8 (smartprops) {MGetKV3ClassDefaults}
{
public:
    CSmartPropAttributeMaterialName m_OriginalMaterial; // offset 0x0, size 0x40, align 8 | MPropertyAttributeEditor MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeMaterialName m_ReplacementMaterial; // offset 0x40, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
};
