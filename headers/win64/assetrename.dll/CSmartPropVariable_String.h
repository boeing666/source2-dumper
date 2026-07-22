#pragma once

class CSmartPropVariable_String : public CSmartPropVariable /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x38]; // offset 0x0
    CUtlString m_DefaultValue; // offset 0x38, size 0x8, align 8
};
