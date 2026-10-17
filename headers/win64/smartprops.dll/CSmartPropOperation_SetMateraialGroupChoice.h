#pragma once

class CSmartPropOperation_SetMateraialGroupChoice : public CSmartPropOperation /*0x0*/  // sizeof 0xF0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_VariableName; // offset 0x50, size 0x8, align 8 | MPropertyDescription MPropertyAttributeEditor MPropertyProvidesEditContextString
    CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // offset 0x58, size 0x40, align 255 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeInt m_ChoiceSelection; // offset 0x98, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription MPropertySuppressExpr
    CUtlVector< MaterialGroupChoice_t > m_MaterialGroupChoices; // offset 0xD8, size 0x18, align 8 | MPropertyAutoExpandSelf
};
