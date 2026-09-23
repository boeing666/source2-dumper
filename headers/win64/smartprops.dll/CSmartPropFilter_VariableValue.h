#pragma once

class CSmartPropFilter_VariableValue : public CSmartPropFilter /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropVariableComparison m_VariableComparison; // offset 0x50, size 0x20, align 8
};
