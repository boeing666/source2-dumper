#pragma once

class CSmartPropOperation_SaveDirection : public CSmartPropOperation /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CSmartPropAttributeDirection m_DirectionVector; // offset 0x50, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // offset 0x90, size 0x40, align 255 | MPropertyDescription
    CUtlString m_VariableName; // offset 0xD0, size 0x8, align 8 | MPropertyAttributeEditor
};
