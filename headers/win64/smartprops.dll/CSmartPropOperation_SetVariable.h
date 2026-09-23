#pragma once

class CSmartPropOperation_SetVariable : public CSmartPropOperation /*0x0*/  // sizeof 0x90, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup MVDataOutlinerNameExpr}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeVariableValue m_VariableValue; // offset 0x50, size 0x40, align 8
};
