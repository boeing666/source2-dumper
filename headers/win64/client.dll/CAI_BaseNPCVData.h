#pragma once

class CAI_BaseNPCVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x330, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
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
    NPCStatusEffectMap_t m_statusEffectMap; // offset 0x150, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0151[0x7]; // offset 0x151
    CUtlVector< NPCAttachmentDesc_t > m_vecAttachments; // offset 0x158, size 0x18, align 8
    CSkillFloat m_flHeadDamageMultiplier; // offset 0x170, size 0x10, align 255 | MPropertyStartGroup
    CSkillFloat m_flChestDamageMultiplier; // offset 0x180, size 0x10, align 255
    CSkillFloat m_flStomachDamageMultiplier; // offset 0x190, size 0x10, align 255
    CSkillFloat m_flArmDamageMultiplier; // offset 0x1A0, size 0x10, align 255
    CSkillFloat m_flLegDamageMultiplier; // offset 0x1B0, size 0x10, align 255
    CSkillInt m_nMaxAdditionalAmmoBalancingShots; // offset 0x1C0, size 0x10, align 255
    bool m_bTakesDamage; // offset 0x1D0, size 0x1, align 1
    char _pad_01D1[0x7]; // offset 0x1D1
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strDamagedEffect; // offset 0x1D8, size 0xE0, align 8 | MPropertyDescription
    bool m_bLightsFiresWhenDamaged; // offset 0x2B8, size 0x1, align 1
    char _pad_02B9[0x3]; // offset 0x2B9
    int32 m_nRagdollHealth; // offset 0x2BC, size 0x4, align 4 | MPropertyDescription
    float32 m_flImpactEnergyScale; // offset 0x2C0, size 0x4, align 4 | MPropertyDescription
    bool m_bAllowNonZUpMovement; // offset 0x2C4, size 0x1, align 1 | MPropertyStartGroup
    bool m_bUseDynamicCollisionHull; // offset 0x2C5, size 0x1, align 1 | MPropertyDescription
    bool m_bRequestCapsuleCollision; // offset 0x2C6, size 0x1, align 1 | MPropertyDescription
    char _pad_02C7[0x1]; // offset 0x2C7
    float32 m_flCapsuleRadiusOverride; // offset 0x2C8, size 0x4, align 4 | MPropertyDescription
    float32 m_flCapsuleHeightOverride; // offset 0x2CC, size 0x4, align 4 | MPropertyDescription
    CUtlVector< CGlobalSymbol > m_vecActionDesiredShared; // offset 0x2D0, size 0x18, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription MPropertyAttributeEditor MPropertyEditContextOverrideValue
    CSoundEventName m_sPlayerKilledNpcSound; // offset 0x2E8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CGlobalSymbol m_sCustomDeathHandshake; // offset 0x2F8, size 0x8, align 8 | MPropertyStartGroup
    CUtlString m_sDefaultMovementSettings; // offset 0x300, size 0x8, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyAttributeEditor
    CUtlVector< AI_MappedMovementSettingsItem_t > m_mappedMovementSettings; // offset 0x308, size 0x18, align 8 | MPropertyFriendlyName
    bool m_bEnableCodeDrivenAnimgraphMovement; // offset 0x320, size 0x1, align 1 | MPropertyDescription
    bool m_bEnableAnimgraphTagDrivenStrafing; // offset 0x321, size 0x1, align 1 | MPropertyDescription
    char _pad_0322[0x2]; // offset 0x322
    float32 m_flMassOverride; // offset 0x324, size 0x4, align 4
    float32 m_flThreatTemperature; // offset 0x328, size 0x4, align 4
    float32 m_flFlashpoint; // offset 0x32C, size 0x4, align 4
};
