#pragma once

class CSmartPropElement_Layout2DGrid : public CSmartPropElement_Group /*0x0*/  // sizeof 0x3A0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeFloat m_flWidth; // offset 0xA0, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange
    CSmartPropAttributeFloat m_flLength; // offset 0xE0, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange
    CSmartPropAttributeBool m_bVerticalLength; // offset 0x120, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeGridPlacementMode m_GridArrangement; // offset 0x160, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeGridOriginMode m_GridOriginMode; // offset 0x1A0, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeInt m_nCountW; // offset 0x1E0, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
    CSmartPropAttributeInt m_nCountL; // offset 0x220, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
    CSmartPropAttributeFloat m_flSpacingWidth; // offset 0x260, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
    CSmartPropAttributeFloat m_flSpacingLength; // offset 0x2A0, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
    CSmartPropAttributeBool m_bAlternateShift; // offset 0x2E0, size 0x40, align 8 | MPropertyDescription MPropertySuppressExpr
    CSmartPropAttributeFloat m_flAlternateShiftWidth; // offset 0x320, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
    CSmartPropAttributeFloat m_flAlternateShiftLength; // offset 0x360, size 0x40, align 8 | MPropertyDescription MPropertyAttributeRange MPropertySuppressExpr
};
