#pragma once

class CSmartPropElement_PlaceMultiple : public CSmartPropElement_Group /*0x0*/  // sizeof 0xE8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    CSmartPropAttributeInt m_nCount; // offset 0xA0, size 0x40, align 8 | MPropertyDescription
    CUtlString m_Expression; // offset 0xE0, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor
};
