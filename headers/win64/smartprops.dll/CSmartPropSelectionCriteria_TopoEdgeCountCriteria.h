#pragma once

class CSmartPropSelectionCriteria_TopoEdgeCountCriteria : public CSmartPropSelectionCriteria /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MVDataComponentValidGrandParents MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CSmartPropAttributeInt m_nTargetOpenEdgeCount; // offset 0x48, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bInvert; // offset 0x88, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
    CSmartPropAttributeBool m_bSharedVert; // offset 0xC8, size 0x40, align 8 | MPropertyFriendlyName MPropertyDescription
};
