#pragma once

class CSmartPropOperation_MaterialTint : public CSmartPropOperation /*0x0*/  // sizeof 0x168, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeMaterialName m_Material; // offset 0x50, size 0x40, align 8 | MPropertyAttributeEditor MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeColorSelectionMode m_SelectionMode; // offset 0x90, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeColor m_Color; // offset 0xD0, size 0x40, align 8 | MPropertyDescription MPropertySuppressExpr
    CColorGradient m_Gradient; // offset 0x110, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CSmartPropAttributeFloat m_ColorPosition; // offset 0x128, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
};
