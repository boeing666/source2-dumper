#pragma once

class CSmartPropElement_Group : public CSmartPropElement /*0x0*/  // sizeof 0xA0, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x88]; // offset 0x0
    CUtlVector< CSmartPropElement* > m_Children; // offset 0x88, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription MVDataPromoteField
};
