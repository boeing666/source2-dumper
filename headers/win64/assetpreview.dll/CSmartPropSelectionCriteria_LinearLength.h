#pragma once

class CSmartPropSelectionCriteria_LinearLength : public CSmartPropSelectionCriteria /*0x0*/  // sizeof 0x148, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MVDataComponentValidGrandParents MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CSmartPropAttributeFloat m_flLength; // offset 0x48, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bAllowScale; // offset 0x88, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeFloat m_flMinLength; // offset 0xC8, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeFloat m_flMaxLength; // offset 0x108, size 0x40, align 8 | MPropertyFriendlyName MPropertySuppressExpr MPropertyDescription
};
