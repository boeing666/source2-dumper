#pragma once

class CSmartPropOperation_CreateSizer : public CSmartPropTransformOperation /*0x0*/  // sizeof 0x3C8, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CUtlString m_Name; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bDisplayModel; // offset 0x58, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeFloat m_flInitialMinX; // offset 0x98, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flInitialMaxX; // offset 0xD8, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMinX; // offset 0x118, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMaxX; // offset 0x158, size 0x40, align 8 | MPropertyGroupName
    CUtlString m_OutputVariableMinX; // offset 0x198, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    CUtlString m_OutputVariableMaxX; // offset 0x1A0, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    CSmartPropAttributeFloat m_flInitialMinY; // offset 0x1A8, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flInitialMaxY; // offset 0x1E8, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMinY; // offset 0x228, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMaxY; // offset 0x268, size 0x40, align 8 | MPropertyGroupName
    CUtlString m_OutputVariableMinY; // offset 0x2A8, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    CUtlString m_OutputVariableMaxY; // offset 0x2B0, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    CSmartPropAttributeFloat m_flInitialMinZ; // offset 0x2B8, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flInitialMaxZ; // offset 0x2F8, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMinZ; // offset 0x338, size 0x40, align 8 | MPropertyGroupName
    CSmartPropAttributeFloat m_flConstraintMaxZ; // offset 0x378, size 0x40, align 8 | MPropertyGroupName
    CUtlString m_OutputVariableMinZ; // offset 0x3B8, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
    CUtlString m_OutputVariableMaxZ; // offset 0x3C0, size 0x8, align 8 | MPropertyGroupName MPropertyAttributeEditor
};
