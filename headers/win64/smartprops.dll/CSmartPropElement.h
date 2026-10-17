#pragma once

class CSmartPropElement  // sizeof 0x88, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MVDataBase MVDataNodeType MVDataAnonymousNode MPropertyFriendlyName MVDataOutlinerLabelExpr}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nElementID; // offset 0x8, size 0x4, align 4 | MPropertySuppressField MVDataUniqueMonotonicInt
    char _pad_000C[0x4]; // offset 0xC
    CSmartPropAttributeBool m_bEnabled; // offset 0x10, size 0x40, align 8 | MVDataEnableKey MPropertyDescription MPropertySortPriority
    CUtlString m_sLabel; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CUtlVector< CSmartPropSelectionCriteria* > m_SelectionCriteria; // offset 0x58, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    CUtlVector< CSmartPropModifier* > m_Modifiers; // offset 0x70, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
};
