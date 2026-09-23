#pragma once

class CSmartPropOperation_RestoreState : public CSmartPropOperation /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataNodeTintColor MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeStateName m_StateName; // offset 0x50, size 0x40, align 8 | MPropertyAttributeEditor MPropertyDescription
    CSmartPropAttributeBool m_bDiscardIfUknown; // offset 0x90, size 0x40, align 8 | MPropertyDescription
};
