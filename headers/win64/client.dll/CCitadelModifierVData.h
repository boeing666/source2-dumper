#pragma once

class CCitadelModifierVData : public CModifierVData /*0x0*/  // sizeof 0x750, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x408]; // offset 0x0
    bool m_bIsBuildup; // offset 0x408, size 0x1, align 1
    bool m_bNetworkValuesForStatsPreview; // offset 0x409, size 0x1, align 1 | MPropertySuppressField
    char _pad_040A[0x6]; // offset 0x40A
    CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // offset 0x410, size 0x18, align 8
    bool m_bCasterCountsAsAssister; // offset 0x428, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0429[0x3]; // offset 0x429
    float32 m_flLingeringAssistWindow; // offset 0x42C, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationCanBeTimeScaled; // offset 0x430, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bDurationReducible; // offset 0x431, size 0x1, align 1
    bool m_bDurationReducibleByCrowdControlDiminish; // offset 0x432, size 0x1, align 1 | MPropertyDescription
    char _pad_0433[0x1]; // offset 0x433
    ModifierTimeScaleSource_t m_eTimeScaleSource; // offset 0x434, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationAffectedByEffectiveness; // offset 0x438, size 0x1, align 1 | MPropertyDescription
    char _pad_0439[0x7]; // offset 0x439
    ParamAndPriority_t m_AG2BaseAction; // offset 0x440, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2BaseState; // offset 0x450, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2HeroState; // offset 0x460, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ModifierOverheadDrawType_t m_eDrawOverheadStatus; // offset 0x470, size 0x4, align 4 | MPropertyStartGroup
    bool m_bReverseHudProgressBar; // offset 0x474, size 0x1, align 1
    char _pad_0475[0x3]; // offset 0x475
    CUtlString m_strSmallIconCssClass; // offset 0x478, size 0x8, align 8
    CUtlString m_strHintText; // offset 0x480, size 0x8, align 8
    CUtlString m_strModifierOverrideStatusID; // offset 0x488, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_strHudIcon; // offset 0x490, size 0x10, align 8
    HudDisplayLocation_t m_eHudDisplayLocation; // offset 0x4A0, size 0x4, align 4
    ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // offset 0x4A4, size 0x4, align 4
    CUtlString m_strHudMessageText; // offset 0x4A8, size 0x8, align 8 | MPropertyDescription
    bool m_bIsHiddenOverhead; // offset 0x4B0, size 0x1, align 1 | MPropertyDescription
    char _pad_04B1[0x7]; // offset 0x4B1
    CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // offset 0x4B8, size 0x18, align 8 | MPropertyDescription
    CCitadelModifierResponseRules_t m_OnCreateResponse; // offset 0x4D0, size 0x38, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // offset 0x508, size 0x88, align 8 | MPropertyStartGroup
    bool m_bEndCreatedSequenceOnRemove; // offset 0x590, size 0x1, align 1 | MPropertyDescription
    char _pad_0591[0x7]; // offset 0x591
    CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // offset 0x598, size 0x88, align 8
    ModifierBarrierBehavior_t m_BarrierBehavior; // offset 0x620, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0624[0x4]; // offset 0x624
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierCreateParticle; // offset 0x628, size 0xE0, align 8
    bool m_bSupressDefaultBarrierBreakParticle; // offset 0x708, size 0x1, align 1
    char _pad_0709[0x7]; // offset 0x709
    CSoundEventName m_sExpiredSound; // offset 0x710, size 0x10, align 8 | MPropertyStartGroup
    FootstepSound_t m_FootstepOverride; // offset 0x720, size 0x18, align 8 | MPropertyDescription
    CSoundEventName m_FootstepAdditional; // offset 0x738, size 0x10, align 8 | MPropertyDescription
    bool m_bRemoveOnInterrupted; // offset 0x748, size 0x1, align 1
    char _pad_0749[0x7]; // offset 0x749
};
