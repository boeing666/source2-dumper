#pragma once

class CSmartPropOperation_ComputeCrossProduct3D : public CSmartPropOperation /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_OutputVariableName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CSmartPropAttributeVector m_InputVectorA; // offset 0x58, size 0x40, align 8 | MPropertyFriendlyName
    CSmartPropAttributeVector m_InputVectorB; // offset 0x98, size 0x40, align 8 | MPropertyFriendlyName
};
