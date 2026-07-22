#pragma once

struct CompMatPropertyMutator_t  // sizeof 0x390, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    bool m_bEnabled; // offset 0x0, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName
    char _pad_0001[0x3]; // offset 0x1
    CompMatPropertyMutatorType_t m_nMutatorCommandType; // offset 0x4, size 0x4, align 4 | MPropertyAutoRebuildOnChange MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strInitWith_Container; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyProperty_InputContainerSrc; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyProperty_InputContainerProperty; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyProperty_TargetProperty; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strRandomRollInputVars_SeedInputVar; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CUtlString > m_vecRandomRollInputVars_InputVarsToRoll; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyMatchingKeys_InputContainerSrc; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyKeysWithSuffix_InputContainerSrc; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyKeysWithSuffix_FindSuffix; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strCopyKeysWithSuffix_ReplaceSuffix; // offset 0x60, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CompositeMaterialInputLooseVariable_t m_nSetValue_Value; // offset 0x68, size 0x288, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strGenerateTexture_TargetParam; // offset 0x2F0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strGenerateTexture_InitialContainer; // offset 0x2F8, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    int32 m_nResolution; // offset 0x300, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bIsScratchTarget; // offset 0x304, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0305[0x3]; // offset 0x305
    CUtlString m_strCompressionFormat; // offset 0x308, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bSplatDebugInfo; // offset 0x310, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bCaptureInRenderDoc; // offset 0x311, size 0x1, align 1 | MPropertyAutoRebuildOnChange MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_0312[0x6]; // offset 0x312
    CUtlVector< CompMatPropertyMutator_t > m_vecTexGenInstructions; // offset 0x318, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CompMatPropertyMutator_t > m_vecConditionalMutators; // offset 0x330, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strPopInputQueue_Container; // offset 0x348, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strDrawText_InputContainerSrc; // offset 0x350, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlString m_strDrawText_InputContainerProperty; // offset 0x358, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    Vector2D m_vecDrawText_Position; // offset 0x360, size 0x8, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    Color m_colDrawText_Color; // offset 0x368, size 0x4, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_036C[0x4]; // offset 0x36C
    CUtlString m_strDrawText_Font; // offset 0x370, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    CUtlVector< CompMatMutatorCondition_t > m_vecConditions; // offset 0x378, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
};
