#pragma once

class CSmartPropElement_PickOne : public CSmartPropElement_Group /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // offset 0xA0, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeInt m_SpecificChildIndex; // offset 0xE0, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CUtlString m_OutputChoiceVariableName; // offset 0x120, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
    CSmartPropAttributeBool m_bConfigurable; // offset 0x128, size 0x40, align 8 | MPropertyDescription
    CSmartPropAttributeVector m_vHandleOffset; // offset 0x168, size 0x40, align 8 | MPropertyGroupName MPropertyReadonlyExpr MPropertyDescription
    CSmartPropAttributeColor m_HandleColor; // offset 0x1A8, size 0x40, align 8 | MPropertyGroupName MPropertyReadonlyExpr MPropertyDescription
    CSmartPropAttributeInt m_HandleSize; // offset 0x1E8, size 0x40, align 8 | MPropertyGroupName MPropertyReadonlyExpr MPropertyDescription
    ConfigurationHandleShape_t m_HandleShape; // offset 0x228, size 0x4, align 4 | MPropertyGroupName MPropertyReadonlyExpr MPropertyDescription
    char _pad_022C[0x4]; // offset 0x22C
};
