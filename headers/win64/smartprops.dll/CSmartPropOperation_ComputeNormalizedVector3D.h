#pragma once

class CSmartPropOperation_ComputeNormalizedVector3D : public CSmartPropOperation /*0x0*/  // sizeof 0x98, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_OutputVariableName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CSmartPropAttributeVector m_InputVector; // offset 0x58, size 0x40, align 8
};
