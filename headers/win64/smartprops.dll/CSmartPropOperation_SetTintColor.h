#pragma once

class CSmartPropOperation_SetTintColor : public CSmartPropOperation /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // offset 0x50, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeInt m_ColorSelection; // offset 0x90, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CSmartPropAttributeApplyColorMode m_Mode; // offset 0xD0, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CUtlVector< ColorChoice_t > m_ColorChoices; // offset 0x110, size 0x18, align 8 | MPropertyDescription
};
