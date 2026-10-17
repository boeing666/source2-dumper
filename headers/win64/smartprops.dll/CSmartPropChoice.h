#pragma once

class CSmartPropChoice : public CSmartPropParameter /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MVDataAnonymousNode MVDataOutlinerNameExpr}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlString m_Name; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_DefaultOption; // offset 0x18, size 0x8, align 8 | MPropertyAttributeChoiceName
    CUtlVector< CSmartPropChoiceOption > m_Options; // offset 0x20, size 0x18, align 8 | MPropertyAutoExpandSelf
};
