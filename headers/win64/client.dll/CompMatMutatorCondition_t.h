#pragma once

struct CompMatMutatorCondition_t  // sizeof 0x28, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    CompMatPropertyMutatorConditionType_t m_nMutatorCondition; // offset 0x0, size 0x4, align 4 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strMutatorConditionContainerName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strMutatorConditionContainerVarName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strMutatorConditionContainerVarValue; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bPassWhenTrue; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x7]; // offset 0x21
};
