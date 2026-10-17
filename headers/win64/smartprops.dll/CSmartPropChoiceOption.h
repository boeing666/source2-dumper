#pragma once

class CSmartPropChoiceOption  // sizeof 0x28, align 0x8 (smartprops) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_Name; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_DisplayName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    CUtlVector< CSmartPropAttributeVariableValue > m_VariableValues; // offset 0x10, size 0x18, align 8 | MPropertyAutoExpandSelf MPropertyAttributeEditor
};
