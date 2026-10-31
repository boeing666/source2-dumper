#pragma once

class CCitadelModifierVData : public CModifierVData /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (server) {MGetKV3ClassDefaults MPropertySuppressBaseClassField MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x418]; // offset 0x0
    bool m_bIsBuildup; // offset 0x418, size 0x1, align 1
    bool m_bNetworkValuesForStatsPreview; // offset 0x419, size 0x1, align 1 | MPropertySuppressField
    char _pad_041A[0x6]; // offset 0x41A
    CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // offset 0x420, size 0x18, align 8
    bool m_bPersistWhileAbilityDormant; // offset 0x438, size 0x1, align 1 | MPropertyDescription
    bool m_bCasterCountsAsAssister; // offset 0x439, size 0x1, align 1 | MPropertyStartGroup
    char _pad_043A[0x2]; // offset 0x43A
    float32 m_flLingeringAssistWindow; // offset 0x43C, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationCanBeTimeScaled; // offset 0x440, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bDurationReducible; // offset 0x441, size 0x1, align 1
    bool m_bDurationExtendible; // offset 0x442, size 0x1, align 1
    bool m_bDurationReducibleByCrowdControlDiminish; // offset 0x443, size 0x1, align 1 | MPropertyDescription
    ModifierTimeScaleSource_t m_eTimeScaleSource; // offset 0x444, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationAffectedByEffectiveness; // offset 0x448, size 0x1, align 1 | MPropertyDescription
    char _pad_0449[0x7]; // offset 0x449
    ParamAndPriority_t m_AG2BaseAction; // offset 0x450, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2BaseState; // offset 0x460, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2HeroState; // offset 0x470, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ModifierOverheadDrawType_t m_eDrawOverheadStatus; // offset 0x480, size 0x4, align 4 | MPropertyStartGroup
    bool m_bReverseHudProgressBar; // offset 0x484, size 0x1, align 1
    char _pad_0485[0x3]; // offset 0x485
    CUtlString m_strSmallIconCssClass; // offset 0x488, size 0x8, align 8
    CUtlString m_strHintText; // offset 0x490, size 0x8, align 8
    CUtlString m_strModifierOverrideStatusID; // offset 0x498, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_strHudIcon; // offset 0x4A0, size 0x10, align 8
    HudDisplayLocation_t m_eHudDisplayLocation; // offset 0x4B0, size 0x4, align 4
    ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // offset 0x4B4, size 0x4, align 4
    CUtlString m_strHudMessageText; // offset 0x4B8, size 0x8, align 8 | MPropertyDescription
    bool m_bIsHiddenOverhead; // offset 0x4C0, size 0x1, align 1 | MPropertyDescription
    char _pad_04C1[0x7]; // offset 0x4C1
    CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // offset 0x4C8, size 0x18, align 8 | MPropertyDescription
    bool m_bHideInStatModifierUI; // offset 0x4E0, size 0x1, align 1 | MPropertyDescription
    char _pad_04E1[0x7]; // offset 0x4E1
    CCitadelModifierResponseRules_t m_OnCreateResponse; // offset 0x4E8, size 0x38, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // offset 0x520, size 0xA0, align 8 | MPropertyStartGroup
    bool m_bEndCreatedSequenceOnRemove; // offset 0x5C0, size 0x1, align 1 | MPropertyDescription
    char _pad_05C1[0x7]; // offset 0x5C1
    CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // offset 0x5C8, size 0xA0, align 8
    ModifierBarrierBehavior_t m_BarrierBehavior; // offset 0x668, size 0x4, align 4 | MPropertyStartGroup
    char _pad_066C[0x4]; // offset 0x66C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierCreateParticle; // offset 0x670, size 0xE0, align 8
    bool m_bSupressDefaultBarrierBreakParticle; // offset 0x750, size 0x1, align 1
    bool m_bSuppressBarrierRefreshSound; // offset 0x751, size 0x1, align 1
    char _pad_0752[0x6]; // offset 0x752
    CSoundEventName m_sExpiredSound; // offset 0x758, size 0x10, align 8 | MPropertyStartGroup
    FootstepSound_t m_FootstepOverride; // offset 0x768, size 0x18, align 8 | MPropertyDescription
    CSoundEventName m_FootstepAdditional; // offset 0x780, size 0x10, align 8 | MPropertyDescription
    bool m_bRemoveOnInterrupted; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x7]; // offset 0x791
};
