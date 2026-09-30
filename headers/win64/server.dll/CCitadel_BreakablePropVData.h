#pragma once

class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    bool m_bBreakOnDodgeTouch; // offset 0x28, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription MPropertyFriendlyName
    bool m_bRenderAfterDeath; // offset 0x29, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bSolidAfterDeath; // offset 0x2A, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bDieOnBreak; // offset 0x2B, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    char _pad_002C[0x4]; // offset 0x2C
    CUtlString m_strDeathSequenceName; // offset 0x30, size 0x8, align 8
    CUtlString m_strHitSequenceName; // offset 0x38, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName
    float32 m_flLootDelay; // offset 0x40, size 0x4, align 4
    bool m_bDamagedByBullets; // offset 0x44, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedByMelee; // offset 0x45, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bHeavyMeleeOnly; // offset 0x46, size 0x1, align 1 | MPropertySuppressExpr
    bool m_bDamagedByAbilities; // offset 0x47, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedBySlide; // offset 0x48, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    bool m_bDamagedByPlayersOnly; // offset 0x49, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName
    char _pad_004A[0x2]; // offset 0x4A
    int32 m_iHealth; // offset 0x4C, size 0x4, align 4 | MPropertyDescription
    int32 m_nMeleeHitsToBreak; // offset 0x50, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertySuppressExpr
    int32 m_nHeavyMeleeHitCount; // offset 0x54, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName MPropertySuppressExpr
    bool m_bNoMeleeCleave; // offset 0x58, size 0x1, align 1 | MPropertyDescription MPropertyFriendlyName MPropertySuppressExpr
    bool m_bIsMantleable; // offset 0x59, size 0x1, align 1 | MPropertyDescription
    bool m_bRequireFullCostToBreak; // offset 0x5A, size 0x1, align 1
    char _pad_005B[0x1]; // offset 0x5B
    float32 m_flOutlineRadius; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    bool m_bRequireVisibleOnMinimapForOutline; // offset 0x60, size 0x1, align 1 | MPropertyDescription MPropertySuppressExpr
    char _pad_0061[0x3]; // offset 0x61
    Color m_colorOutline; // offset 0x64, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x68, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription MPropertyProvidesEditContextString
    float32 m_flModelScale; // offset 0x148, size 0x4, align 4
    char _pad_014C[0x4]; // offset 0x14C
    CModelMaterialGroupName m_sMaterialGroupName; // offset 0x150, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ambientParticle; // offset 0x158, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_breakParticle; // offset 0x238, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_breakRollFailParticle; // offset 0x318, size 0xE0, align 8
    CSoundEventName m_sBreakSound; // offset 0x3F8, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_sSpawnSound; // offset 0x408, size 0x10, align 8
    CSoundEventName m_sBreakRollFailSound; // offset 0x418, size 0x10, align 8
    CSoundEventName m_sMeleeDamageSound; // offset 0x428, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_sOtherDamageSound; // offset 0x438, size 0x10, align 8
    CSoundEventName m_sMeleeRejectSound; // offset 0x448, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_OtherRejectSound; // offset 0x458, size 0x10, align 8
    CSoundEventName m_sAmbientSound; // offset 0x468, size 0x10, align 8 | MPropertyDescription
    float32 m_flInitialSpawnTime; // offset 0x478, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flInitialSpawnTimeTest; // offset 0x47C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTime; // offset 0x480, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTimeTest; // offset 0x484, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strMinimapCSSClassAlive; // offset 0x488, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strMinimapCSSClassDead; // offset 0x490, size 0x8, align 8 | MPropertyDescription
    float32 m_flMinDistanceToRevealOnMinimap; // offset 0x498, size 0x4, align 4 | MPropertyDescription
    char _pad_049C[0x4]; // offset 0x49C
    CUtlString m_strLayoutFile; // offset 0x4A0, size 0x8, align 8 | MPropertyStartGroup MPropertyCustomFGDType
    float32 m_flPanelHeightOffset; // offset 0x4A8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPanelDrawDistance; // offset 0x4AC, size 0x4, align 4 | MPropertySuppressExpr
    CUtlString m_strInWorldCSSClasses; // offset 0x4B0, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    float32 m_flPanelWidth; // offset 0x4B8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPanelHeight; // offset 0x4BC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPowerupDropChance; // offset 0x4C0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    ECitadelRandomRollTypes m_eRollType; // offset 0x4C4, size 0x4, align 4 | MPropertyDescription
    CUtlOrderedMap< CSubclassName< 0 >, float32 > m_mapPickupChances; // offset 0x4C8, size 0x28, align 8 | MPropertyDescription MPropertyFriendlyName MPropertySuppressExpr
};
