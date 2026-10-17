#pragma once

class CSmartPropOperation_RandomColorTintColor : public CSmartPropOperation /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // offset 0x50, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_ColorPosition; // offset 0x90, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    ApplyColorMode_t m_Mode; // offset 0xD0, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    char _pad_00D4[0x4]; // offset 0xD4
    CColorGradient m_Gradient; // offset 0xD8, size 0x18, align 8 | MPropertyDescription
};
