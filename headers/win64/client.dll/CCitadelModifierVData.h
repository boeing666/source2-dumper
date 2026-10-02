#pragma once

class CCitadelModifierVData : public CModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x410]; // offset 0x0
    bool m_bIsBuildup; // offset 0x410, size 0x1, align 1
    bool m_bNetworkValuesForStatsPreview; // offset 0x411, size 0x1, align 1 | MPropertySuppressField
    char _pad_0412[0x6]; // offset 0x412
    CUtlVector< CUtlString > m_vecAutoRegisterModifierValueFromAbilityPropertyName; // offset 0x418, size 0x18, align 8
    bool m_bPersistWhileAbilityDormant; // offset 0x430, size 0x1, align 1 | MPropertyDescription
    bool m_bCasterCountsAsAssister; // offset 0x431, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0432[0x2]; // offset 0x432
    float32 m_flLingeringAssistWindow; // offset 0x434, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationCanBeTimeScaled; // offset 0x438, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bDurationReducible; // offset 0x439, size 0x1, align 1
    bool m_bDurationReducibleByCrowdControlDiminish; // offset 0x43A, size 0x1, align 1 | MPropertyDescription
    char _pad_043B[0x1]; // offset 0x43B
    ModifierTimeScaleSource_t m_eTimeScaleSource; // offset 0x43C, size 0x4, align 4 | MPropertyDescription
    bool m_bDurationAffectedByEffectiveness; // offset 0x440, size 0x1, align 1 | MPropertyDescription
    char _pad_0441[0x7]; // offset 0x441
    ParamAndPriority_t m_AG2BaseAction; // offset 0x448, size 0x10, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2BaseState; // offset 0x458, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ParamAndPriority_t m_AG2HeroState; // offset 0x468, size 0x10, align 8 | MPropertyFriendlyName MPropertyDescription
    ModifierOverheadDrawType_t m_eDrawOverheadStatus; // offset 0x478, size 0x4, align 4 | MPropertyStartGroup
    bool m_bReverseHudProgressBar; // offset 0x47C, size 0x1, align 1
    char _pad_047D[0x3]; // offset 0x47D
    CUtlString m_strSmallIconCssClass; // offset 0x480, size 0x8, align 8
    CUtlString m_strHintText; // offset 0x488, size 0x8, align 8
    CUtlString m_strModifierOverrideStatusID; // offset 0x490, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_strHudIcon; // offset 0x498, size 0x10, align 8
    HudDisplayLocation_t m_eHudDisplayLocation; // offset 0x4A8, size 0x4, align 4
    ModifiersDisplayLocation_t m_eModifierDisplayLocaiton; // offset 0x4AC, size 0x4, align 4
    CUtlString m_strHudMessageText; // offset 0x4B0, size 0x8, align 8 | MPropertyDescription
    bool m_bIsHiddenOverhead; // offset 0x4B8, size 0x1, align 1 | MPropertyDescription
    char _pad_04B9[0x7]; // offset 0x4B9
    CUtlVector< EModifierValue > m_vecAlwaysShowInStatModifierUI; // offset 0x4C0, size 0x18, align 8 | MPropertyDescription
    bool m_bHideInStatModifierUI; // offset 0x4D8, size 0x1, align 1 | MPropertyDescription
    char _pad_04D9[0x7]; // offset 0x4D9
    CCitadelModifierResponseRules_t m_OnCreateResponse; // offset 0x4E0, size 0x38, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // offset 0x518, size 0xA0, align 8 | MPropertyStartGroup
    bool m_bEndCreatedSequenceOnRemove; // offset 0x5B8, size 0x1, align 1 | MPropertyDescription
    char _pad_05B9[0x7]; // offset 0x5B9
    CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // offset 0x5C0, size 0xA0, align 8
    ModifierBarrierBehavior_t m_BarrierBehavior; // offset 0x660, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0664[0x4]; // offset 0x664
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BarrierCreateParticle; // offset 0x668, size 0xE0, align 8
    bool m_bSupressDefaultBarrierBreakParticle; // offset 0x748, size 0x1, align 1
    bool m_bSuppressBarrierRefreshSound; // offset 0x749, size 0x1, align 1
    char _pad_074A[0x6]; // offset 0x74A
    CSoundEventName m_sExpiredSound; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    FootstepSound_t m_FootstepOverride; // offset 0x760, size 0x18, align 8 | MPropertyDescription
    CSoundEventName m_FootstepAdditional; // offset 0x778, size 0x10, align 8 | MPropertyDescription
    bool m_bRemoveOnInterrupted; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
};
