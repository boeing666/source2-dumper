#pragma once

class CSmartPropRoot  // sizeof 0xC8, align 0x8 (smartprops) {MGetKV3ClassDefaults MSmartPropClassVersion MVDataRoot MVDataSingleton MVDataFileExtension MVDataPreviewWidget MVDataGroupNodeClass MVDataUsesComponentEditor MPropertyFriendlyName MPropertyDescription}
{
public:
    int32 m_nContentVersion; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CSmartPropAttributeInt m_nMaxDepth; // offset 0x8, size 0x40, align 8 | MPropertyDescription
    CUtlVector< CSmartPropVariable* > m_Variables; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    CUtlVector< CSmartPropChoice* > m_Choices; // offset 0x60, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    CUtlVector< CSmartPropElement* > m_Children; // offset 0x78, size 0x18, align 8 | MPropertyDescription MVDataPromoteField
    CUtlVector< CSmartPropModifier* > m_Modifiers; // offset 0x90, size 0x18, align 8 | MPropertyFriendlyName MVDataPromoteField
    char _pad_00A8[0x20]; // offset 0xA8
};
