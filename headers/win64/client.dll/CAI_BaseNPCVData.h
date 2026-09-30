#pragma once

class CAI_BaseNPCVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x2D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // offset 0x28, size 0xE0, align 8 | MPropertyGroupName MPropertyProvidesEditContextString
    CFootstepTableHandle m_hFootstepSounds; // offset 0x108, size 0x8, align 255 | MPropertyGroupName
    CUtlVector< CGlobalSymbol > m_vecNavLinkMovementNames; // offset 0x110, size 0x18, align 8 | MPropertyFriendlyName MPropertyDescription MPropertyCustomFGDType
    float32 m_flAimConeAngle; // offset 0x128, size 0x4, align 4
    char _pad_012C[0x4]; // offset 0x12C
    int32 m_nMaxHealth; // offset 0x130, size 0x4, align 4
    char _pad_0134[0x4]; // offset 0x134
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_vecIntrinsicModifiers; // offset 0x138, size 0x18, align 8
    CUtlVector< CSubclassName< 2 > > m_vecIntrinsicModifiersByName; // offset 0x150, size 0x18, align 8
    NPCStatusEffectMap_t m_statusEffectMap; // offset 0x168, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0169[0x7]; // offset 0x169
    CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // offset 0x170, size 0x18, align 8
    bool m_bTakesDamage; // offset 0x188, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0189[0x7]; // offset 0x189
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamagedEffect; // offset 0x190, size 0xE0, align 8 | MPropertyDescription
    int32 m_nRagdollHealth; // offset 0x270, size 0x4, align 4 | MPropertyDescription
    float32 m_flImpactEnergyScale; // offset 0x274, size 0x4, align 4 | MPropertyDescription
    bool m_bAllowNonZUpMovement; // offset 0x278, size 0x1, align 1 | MPropertyStartGroup
    bool m_bUseDynamicCollisionHull; // offset 0x279, size 0x1, align 1 | MPropertyDescription
    bool m_bRequestCapsuleCollision; // offset 0x27A, size 0x1, align 1 | MPropertyDescription
    char _pad_027B[0x1]; // offset 0x27B
    float32 m_flCapsuleRadiusOverride; // offset 0x27C, size 0x4, align 4 | MPropertyDescription
    float32 m_flCapsuleHeightOverride; // offset 0x280, size 0x4, align 4 | MPropertyDescription
    char _pad_0284[0x4]; // offset 0x284
    CUtlVector< CGlobalSymbol > m_vecActionDesiredShared; // offset 0x288, size 0x18, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideValue
    CSoundEventName m_sPlayerKilledNpcSound; // offset 0x2A0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_sDefaultMovementSettings; // offset 0x2B0, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    CUtlVector< AI_MappedMovementSettingsItem_t > m_mappedMovementSettings; // offset 0x2B8, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bEnableCodeDrivenAnimgraphMovement; // offset 0x2D0, size 0x1, align 1 | MPropertyDescription
    bool m_bEnableAnimgraphTagDrivenStrafing; // offset 0x2D1, size 0x1, align 1 | MPropertyDescription
    char _pad_02D2[0x2]; // offset 0x2D2
    float32 m_flMassOverride; // offset 0x2D4, size 0x4, align 4
};
