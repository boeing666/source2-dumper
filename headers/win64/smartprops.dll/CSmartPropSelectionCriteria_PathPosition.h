#pragma once

class CSmartPropSelectionCriteria_PathPosition : public CSmartPropSelectionCriteria /*0x0*/  // sizeof 0x188, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MVDataComponentValidGrandParents MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CSmartPropAttributePathPositions m_PlaceAtPositions; // offset 0x48, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeInt m_nPlaceEveryNthPosition; // offset 0x88, size 0x40, align 8 | MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeInt m_nNthPositionIndexOffset; // offset 0xC8, size 0x40, align 8 | MPropertySuppressExpr MPropertyDescription
    CSmartPropAttributeBool m_bAllowAtStart; // offset 0x108, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeBool m_bAllowAtEnd; // offset 0x148, size 0x40, align 8 | MPropertyDescription
};
