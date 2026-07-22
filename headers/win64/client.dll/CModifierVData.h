#pragma once

class CModifierVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x408, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CModifierLevelFloat m_flDuration; // offset 0x28, size 0x10, align 255 | MPropertyStartGroup
    bool m_bKeepMaximumDurationOnRefresh; // offset 0x38, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0039[0x7]; // offset 0x39
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleEffect; // offset 0x40, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strParticleEffectConfig; // offset 0x120, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strParticleStatusEffect; // offset 0x128, size 0xE0, align 8 | MPropertyGroupName MPropertyDescription
    CUtlString m_strParticleStatusEffectConfig; // offset 0x208, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strScreenParticleEffect; // offset 0x210, size 0xE0, align 8 | MPropertyGroupName MPropertyDescription
    CUtlString m_strScreenParticleEffectConfig; // offset 0x2F0, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    int32 m_nStatusEffectPriority; // offset 0x2F8, size 0x4, align 4 | MPropertyGroupName MPropertyDescription
    char _pad_02FC[0x4]; // offset 0x2FC
    CUtlVector< ModifierRenderAttribute_t > m_vecRenderAttributes; // offset 0x300, size 0x18, align 8 | MPropertyGroupName
    CSoundEventName m_sStartSound; // offset 0x318, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_sAmbientLoopingSound; // offset 0x328, size 0x10, align 8 | MPropertyGroupName
    ModifierSourceType_t m_nAmbientLoopingSoundSource; // offset 0x338, size 0x4, align 4 | MPropertyGroupName
    ModifierSoundRecipients_t m_nAmbientLoopingSoundRecipients; // offset 0x33C, size 0x4, align 4 | MPropertyGroupName
    CSoundEventName m_sEndSound; // offset 0x340, size 0x10, align 8 | MPropertyGroupName
    CBitVecEnum< EModifierState > m_nEnabledStateMask; // offset 0x350, size 0x28, align 4 | MPropertyGroupName
    CBitVecEnum< EModifierState > m_nDisabledStateMask; // offset 0x378, size 0x28, align 4 | MPropertyGroupName
    ModifierAttribute_t m_nAttributes; // offset 0x3A0, size 0x4, align 4 | MPropertyGroupName
    char _pad_03A4[0x4]; // offset 0x3A4
    CUtlVector< ModifierScriptValue_t > m_vecScriptValues; // offset 0x3A8, size 0x18, align 8 | MPropertyGroupName MPropertyDescription
    CUtlVector< ModifierScriptedEventHandler_t > m_vecScriptEventHandlers; // offset 0x3C0, size 0x18, align 8 | MPropertyGroupName MPropertyDescription
    ModifierDisableGroup_t m_nDisableGroupsMask; // offset 0x3D8, size 0x4, align 4
    bool m_bIsHidden; // offset 0x3DC, size 0x1, align 1 | MPropertyGroupName MPropertyDescription
    char _pad_03DD[0x3]; // offset 0x3DD
    ModifierHiddenType_t m_eHiddenType; // offset 0x3E0, size 0x4, align 4 | MPropertyGroupName MPropertySuppressExpr
    char _pad_03E4[0x4]; // offset 0x3E4
    CUtlString m_sLocalizationName; // offset 0x3E8, size 0x8, align 8 | MPropertyGroupName MPropertyDescription
    ModifierDebuffType_t m_eDebuffType; // offset 0x3F0, size 0x4, align 4 | MPropertyDescription
    bool m_bAutomaticallyDecayStacks; // offset 0x3F4, size 0x1, align 1 | MPropertyDescription
    bool m_bAllowApplicationPrediction; // offset 0x3F5, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_03F6[0x12]; // offset 0x3F6
};
