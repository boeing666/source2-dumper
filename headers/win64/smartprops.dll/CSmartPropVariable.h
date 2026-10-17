#pragma once

class CSmartPropVariable : public CSmartPropParameter /*0x0*/  // sizeof 0x38, align 0xFF [vtable abstract] (smartprops) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MVDataAnonymousNode MVDataOutlinerNameExpr}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_VariableName; // offset 0x10, size 0x8, align 8
    bool m_bExposeAsParameter; // offset 0x18, size 0x1, align 1 | MPropertySortPriority MPropertyDescription
    char _pad_0019[0x7]; // offset 0x19
    CUtlString m_DisplayName; // offset 0x20, size 0x8, align 8 | MPropertySortPriority MPropertyReadonlyExpr MPropertyFriendlyName MPropertyDescription
    CUtlString m_HideExpression; // offset 0x28, size 0x8, align 8 | MPropertySortPriority MPropertyReadonlyExpr MPropertyDescription
    CUtlString m_ReadOnlyExpression; // offset 0x30, size 0x8, align 8 | MPropertySortPriority MPropertyReadonlyExpr MPropertyDescription
};
