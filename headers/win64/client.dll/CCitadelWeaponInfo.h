#pragma once

class CCitadelWeaponInfo  // sizeof 0x8D0, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC]; // offset 0x0
    EBulletHandlerType_t m_eBulletHandlerType; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    float32 m_flBulletDamage; // offset 0x10, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    ECitadelDamageType m_eDamageType; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    int32 m_iBullets; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    int32 m_iSplitShotsMax; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    float32 m_flSplitShotAngles; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    bool m_bExpressShotDisabled; // offset 0x24, size 0x1, align 1 | MPropertyDescription
    bool m_bHitOnceAcrossAllBullets; // offset 0x25, size 0x1, align 1 | MPropertyDescription
    char _pad_0026[0x2]; // offset 0x26
    int32 m_iBulletsToFullyClaimOrb; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    float32 m_flExplosionRadius; // offset 0x2C, size 0x4, align 4 | MPropertyDescription
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x30, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr MPropertyAttributeRange
    bool m_bAllowExplosionToCollectGold; // offset 0x34, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_0035[0x3]; // offset 0x35
    int32 m_iClipSize; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    float32 m_flCycleTime; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBulletCreationDelay; // offset 0x40, size 0x4, align 4 | MPropertyDescription
    int32 m_iBurstShotCount; // offset 0x44, size 0x4, align 4 | MPropertyDescription
    float32 m_flIntraBurstCycleTime; // offset 0x48, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    int32 m_iAmmoConsumedPerShot; // offset 0x4C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRange; // offset 0x50, size 0x4, align 4 | MPropertyDescription
    float32 m_flRangeWhileZoomed; // offset 0x54, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffStartRange; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffEndRange; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffBias; // offset 0x60, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flDamageFalloffStartScale; // offset 0x64, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffEndScale; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    bool m_bDontPassThroughPortals; // offset 0x6C, size 0x1, align 1 | MPropertyDescription
    bool m_bPlayImpactEffectsOnTeammates; // offset 0x6D, size 0x1, align 1 | MPropertyDescription
    char _pad_006E[0x2]; // offset 0x6E
    float32 m_flPenetrationPercent; // offset 0x70, size 0x4, align 4 | MPropertyDescription
    float32 m_flIronSightsTime; // offset 0x74, size 0x4, align 4 | MPropertyDescription
    float32 m_reloadDuration; // offset 0x78, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription MPropertyFriendlyName
    bool m_bReloadUseActiveWeaponInfoDuration; // offset 0x7C, size 0x1, align 1 | MPropertyDescription
    bool m_bReloadSingleBullets; // offset 0x7D, size 0x1, align 1 | MPropertyDescription
    bool m_bReloadSingleBulletsAllowCancel; // offset 0x7E, size 0x1, align 1 | MPropertyDescription
    char _pad_007F[0x1]; // offset 0x7F
    float32 m_flReloadSingleBulletsInitialDelay; // offset 0x80, size 0x4, align 4 | MPropertyDescription
    bool m_bCanCrit; // offset 0x84, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0085[0x3]; // offset 0x85
    float32 m_flCritBonusStartRange; // offset 0x88, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusEndRange; // offset 0x8C, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusStart; // offset 0x90, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusEnd; // offset 0x94, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusAgainstNPCs; // offset 0x98, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    CITADEL_UNIT_TARGET_TYPE m_eCritFilter; // offset 0x9C, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    CITADEL_UNIT_TARGET_TYPE m_eCritAlwaysFilter; // offset 0xA0, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    bool m_bSpinsUp; // offset 0xA4, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_00A5[0x3]; // offset 0xA5
    float32 m_flMaxSpinCycleTime; // offset 0xA8, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flSpinIncreaseRate; // offset 0xAC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flSpinDecayRate; // offset 0xB0, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flBuildUpRate; // offset 0xB4, size 0x4, align 4 | MPropertySuppressExpr
    bool m_bIsSemiAuto; // offset 0xB8, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bSemiAutoFireOnRelease; // offset 0xB9, size 0x1, align 1 | MPropertyDescription
    bool m_bChargesUp; // offset 0xBA, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bChargeWaitForInputRelease; // offset 0xBB, size 0x1, align 1 | MPropertySuppressExpr
    float32 m_flChargeUpTime; // offset 0xBC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flChargedBulletDamage; // offset 0xC0, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flChargedExplosionRadius; // offset 0xC4, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flChargedBulletGravityScale; // offset 0xC8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flChargedBulletSpeed; // offset 0xCC, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flFireAtChargePercent; // offset 0xD0, size 0x4, align 4 | MPropertySuppressExpr
    int32 m_iChargedAmmoConsumedPerShot; // offset 0xD4, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flBulletSpeed; // offset 0xD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBulletSpeedRandomFactor; // offset 0xDC, size 0x4, align 4
    float32 m_flBulletGravityScale; // offset 0xE0, size 0x4, align 4
    float32 m_flBulletRadius; // offset 0xE4, size 0x4, align 4
    float32 m_flBulletRadiusVsWorld; // offset 0xE8, size 0x4, align 4
    float32 m_flBulletLifetime; // offset 0xEC, size 0x4, align 4
    float32 m_flVerticalAimBias; // offset 0xF0, size 0x4, align 4
    float32 m_flBulletInheritShooterVelocityScale; // offset 0xF4, size 0x4, align 4 | MPropertyDescription
    bool m_bUseBulletGravityScaleCurve; // offset 0xF8, size 0x1, align 1 | MPropertyDescription
    char _pad_00F9[0x7]; // offset 0xF9
    CPiecewiseCurve m_flBulletGravityScaleOverDistance; // offset 0x100, size 0x40, align 8 | MPropertySuppressExpr
    float32 m_flCurveTime; // offset 0x140, size 0x4, align 4 | MPropertyDescription
    bool m_bCanZoom; // offset 0x144, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_0145[0x3]; // offset 0x145
    float32 m_flZoomFOV; // offset 0x148, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flZoomFOV_Relative; // offset 0x14C, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flZoomMoveSpeedPercent; // offset 0x150, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flShootMoveSpeedPercent; // offset 0x154, size 0x4, align 4
    float32 m_flReloadMoveSpeedPercent; // offset 0x158, size 0x4, align 4
    bool m_bUsesSpreadPattern; // offset 0x15C, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_015D[0x3]; // offset 0x15D
    float32 m_Spread; // offset 0x160, size 0x4, align 4 | MPropertyDescription
    bool m_bFirstShotPerfectAccuracy; // offset 0x164, size 0x1, align 1 | MPropertyDescription
    char _pad_0165[0x3]; // offset 0x165
    CRangeFloat m_AimingShootSpreadPenalty; // offset 0x168, size 0x8, align 255 | MPropertyDescription
    float32 m_flScatterYawScale; // offset 0x170, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyPerShot; // offset 0x174, size 0x4, align 4 | MPropertyDescription
    CitadelSpreadPerShotNormalization_t m_ShootSpreadPenaltyPerShotNormalization; // offset 0x178, size 0x14, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyDecayDelay; // offset 0x18C, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyDecay; // offset 0x190, size 0x4, align 4 | MPropertyDescription
    float32 m_flSpreadPenaltyDecay; // offset 0x194, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootingUpSpreadPenalty; // offset 0x198, size 0x4, align 4 | MPropertyDescription
    float32 m_flAutoReplenishClip; // offset 0x19C, size 0x4, align 4 | MPropertyDescription
    CRangeFloat m_NpcAimingSpread; // offset 0x1A0, size 0x8, align 255 | MPropertyDescription
    CUtlVector< Vector2D > m_vecScatterOffsets; // offset 0x1A8, size 0x18, align 8 | MPropertyDescription
    float32 m_flPelletScatterFactor; // offset 0x1C0, size 0x4, align 4 | MPropertyDescription
    float32 m_flPelletScatterSpreadFactor; // offset 0x1C4, size 0x4, align 4 | MPropertyDescription
    bool m_bApplySpreadToFirstPellet; // offset 0x1C8, size 0x1, align 1 | MPropertyDescription
    char _pad_01C9[0x7]; // offset 0x1C9
    CUtlVector< Vector2D > m_vecOriginOffsets; // offset 0x1D0, size 0x18, align 8 | MPropertyDescription
    float32 m_flVerticalPunch; // offset 0x1E8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flHorizontalPunch; // offset 0x1EC, size 0x4, align 4 | MPropertyDescription
    CitadelWeaponRecoilData_t m_HorizontalRecoil; // offset 0x1F0, size 0x14, align 4
    CitadelWeaponRecoilData_t m_VerticallRecoil; // offset 0x204, size 0x14, align 4
    float32 m_flRecoilSpeed; // offset 0x218, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilRecoveryDelayFactor; // offset 0x21C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilRecoverySpeed; // offset 0x220, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilShotIndexRecoveryTimeFactor; // offset 0x224, size 0x4, align 4 | MPropertyDescription
    int32 m_nRecoilSeed; // offset 0x228, size 0x4, align 4
    char _pad_022C[0x4]; // offset 0x22C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBulletTravelTracerParticle; // offset 0x230, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szSelfBulletTravelTracerParticle; // offset 0x310, size 0xE0, align 8
    float32 m_flRecycleTime; // offset 0x3F0, size 0x4, align 4 | MPropertyDescription
    char _pad_03F4[0x4]; // offset 0x3F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBulletLinkParticle; // offset 0x3F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szChargedBulletTravelTracerParticle; // offset 0x4D8, size 0xE0, align 8
    bool m_bUseDesatForFriendlyNonHeroTracer; // offset 0x5B8, size 0x1, align 1
    char _pad_05B9[0x3]; // offset 0x5B9
    EAttachmentSourceType m_eAttachmentSourceType; // offset 0x5BC, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCustomAttachmentSource; // offset 0x5C0, size 0x8, align 8 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashEffectName; // offset 0x5C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strWeaponImpactEffect; // offset 0x6A8, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< CUtlStringToken, PerSurfaceImpactEffects_t > m_mapImpactEffects; // offset 0x788, size 0x28, align 8 | MPropertyFriendlyName MPropertyDescription
    bool m_bUseWeaponAbilityName; // offset 0x7B0, size 0x1, align 1 | MPropertyDescription
    char _pad_07B1[0x3]; // offset 0x7B1
    float32 m_flDamageForce; // offset 0x7B4, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strShootSound; // offset 0x7B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirstShotSound; // offset 0x7C8, size 0x10, align 8
    CSoundEventName m_strShotReleaseSound; // offset 0x7D8, size 0x10, align 8
    CSoundEventName m_strBulletLoopingSound; // offset 0x7E8, size 0x10, align 8
    CSoundEventName m_strBulletWhizSound; // offset 0x7F8, size 0x10, align 8
    CSoundEventName m_strBulletImpactSound; // offset 0x808, size 0x10, align 8
    float32 m_flBulletWhizDistance; // offset 0x818, size 0x4, align 4
    char _pad_081C[0x4]; // offset 0x81C
    CSoundEventName m_strReloadSound; // offset 0x820, size 0x10, align 8
    CSoundEventName m_strReloadEndSound; // offset 0x830, size 0x10, align 8
    CSoundEventName m_strLocalPlayerBulletImpactSound; // offset 0x840, size 0x10, align 8
    CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // offset 0x850, size 0x10, align 8
    CSoundEventName m_strZoomInSound; // offset 0x860, size 0x10, align 8
    CSoundEventName m_strZoomOutSound; // offset 0x870, size 0x10, align 8
    CSoundEventName m_strSpinUpSound; // offset 0x880, size 0x10, align 8
    CSoundEventName m_strSpinDownSound; // offset 0x890, size 0x10, align 8
    CSoundEventName m_strSpinUpLoopSound; // offset 0x8A0, size 0x10, align 8
    char _pad_08B0[0x1C]; // offset 0x8B0
    float32 m_flMaxLagCompensation; // offset 0x8CC, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
};
