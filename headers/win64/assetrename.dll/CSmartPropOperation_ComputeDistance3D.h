#pragma once

class CSmartPropOperation_ComputeDistance3D : public CSmartPropOperation /*0x0*/  // sizeof 0x198, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_OutputVariableName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor
    CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // offset 0x58, size 0x40, align 255 | MPropertyDescription
    CSmartPropAttributeVector m_InputPositionA; // offset 0x98, size 0x40, align 8 | MPropertyGroupName MPropertyFriendlyName
    CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // offset 0xD8, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
    CSmartPropAttributeVector m_InputPositionB; // offset 0x118, size 0x40, align 8 | MPropertyGroupName MPropertyFriendlyName
    CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // offset 0x158, size 0x40, align 255 | MPropertyGroupName MPropertyDescription
};
