#pragma once

class CSolveIKChainAnimNodeChainData  // sizeof 0x68, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_IkChain; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    SolveIKChainAnimNodeSettingSource m_SolverSettingSource; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    IKSolverSettings_t m_OverrideSolverSettings; // offset 0x14, size 0xC, align 255 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertyAttrStateCallback
    SolveIKChainAnimNodeSettingSource m_TargetSettingSource; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    char _pad_0024[0x4]; // offset 0x24
    IKTargetSettings_t m_OverrideTargetSettings; // offset 0x28, size 0x28, align 255 | MPropertyFriendlyName MPropertyAutoExpandSelf MPropertyAttrStateCallback
    SolveIKChainAnimNodeDebugSetting m_DebugSetting; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    float32 m_flDebugNormalizedLength; // offset 0x54, size 0x4, align 4 | MPropertyFriendlyName MPropertyGroupName
    Vector m_vDebugOffset; // offset 0x58, size 0xC, align 4 | MPropertyFriendlyName MPropertyGroupName
    char _pad_0064[0x4]; // offset 0x64
};
