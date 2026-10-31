#pragma once

class CCitadel_BreakablePropVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
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
    char _pad_0059[0x3]; // offset 0x59
    float32 m_flBreakDebrisSpeed; // offset 0x5C, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    float32 m_flInheritBreakerVelocityFrac; // offset 0x60, size 0x4, align 4 | MPropertyDescription MPropertyFriendlyName
    bool m_bIsMantleable; // offset 0x64, size 0x1, align 1 | MPropertyDescription
    bool m_bRequireFullCostToBreak; // offset 0x65, size 0x1, align 1
    char _pad_0066[0x2]; // offset 0x66
    float32 m_flOutlineRadius; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    bool m_bRequireVisibleOnMinimapForOutline; // offset 0x6C, size 0x1, align 1 | MPropertyDescription MPropertySuppressExpr
    char _pad_006D[0x3]; // offset 0x6D
    CEmbeddedSubclass< CCitadelModifier > m_NearbyAuraModifier; // offset 0x70, size 0x10, align 8 | MPropertyDescription
    Color m_colorOutline; // offset 0x80, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    char _pad_0084[0x4]; // offset 0x84
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x88, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription MPropertyProvidesEditContextString
    float32 m_flModelScale; // offset 0x168, size 0x4, align 4
    Vector m_vecLocalOffset; // offset 0x16C, size 0xC, align 4 | MPropertyDescription MPropertyFriendlyName
    QAngle m_angLocalRotation; // offset 0x178, size 0xC, align 4 | MPropertyDescription MPropertyFriendlyName
    char _pad_0184[0x4]; // offset 0x184
    CModelMaterialGroupName m_sMaterialGroupName; // offset 0x188, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ambientParticle; // offset 0x190, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_breakParticle; // offset 0x270, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_breakRollFailParticle; // offset 0x350, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_damageParticle; // offset 0x430, size 0xE0, align 8
    CSoundEventName m_sBreakSound; // offset 0x510, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_sSpawnSound; // offset 0x520, size 0x10, align 8
    CSoundEventName m_sBreakRollFailSound; // offset 0x530, size 0x10, align 8
    CSoundEventName m_sMeleeDamageSound; // offset 0x540, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_sOtherDamageSound; // offset 0x550, size 0x10, align 8
    CSoundEventName m_sMeleeRejectSound; // offset 0x560, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_OtherRejectSound; // offset 0x570, size 0x10, align 8
    CSoundEventName m_sAmbientSound; // offset 0x580, size 0x10, align 8 | MPropertyDescription
    bool m_bUseVDataSpawnTimes; // offset 0x590, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0591[0x3]; // offset 0x591
    float32 m_flInitialSpawnTime; // offset 0x594, size 0x4, align 4
    float32 m_flInitialSpawnTimeTest; // offset 0x598, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTime; // offset 0x59C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRespawnTimeTest; // offset 0x5A0, size 0x4, align 4 | MPropertyDescription
    bool m_bSpawnInStreetBrawl; // offset 0x5A4, size 0x1, align 1 | MPropertyDescription
    char _pad_05A5[0x3]; // offset 0x5A5
    CUtlString m_strMinimapCSSClassAlive; // offset 0x5A8, size 0x8, align 8 | MPropertyStartGroup MPropertyDescription
    CUtlString m_strMinimapCSSClassDead; // offset 0x5B0, size 0x8, align 8 | MPropertyDescription
    float32 m_flMinDistanceToRevealOnMinimap; // offset 0x5B8, size 0x4, align 4 | MPropertyDescription
    char _pad_05BC[0x4]; // offset 0x5BC
    CUtlString m_strLayoutFile; // offset 0x5C0, size 0x8, align 8 | MPropertyStartGroup MPropertyCustomFGDType
    float32 m_flPanelHeightOffset; // offset 0x5C8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPanelDrawDistance; // offset 0x5CC, size 0x4, align 4 | MPropertySuppressExpr
    CUtlString m_strInWorldCSSClasses; // offset 0x5D0, size 0x8, align 8 | MPropertyDescription MPropertySuppressExpr
    float32 m_flPanelWidth; // offset 0x5D8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPanelHeight; // offset 0x5DC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPowerupDropChance; // offset 0x5E0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    ECitadelRandomRollTypes m_eRollType; // offset 0x5E4, size 0x4, align 4 | MPropertyDescription
    CUtlOrderedMap< CSubclassName< 0 >, float32 > m_mapPickupChances; // offset 0x5E8, size 0x28, align 8 | MPropertyDescription MPropertyFriendlyName MPropertySuppressExpr
};
