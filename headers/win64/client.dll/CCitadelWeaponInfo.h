#pragma once

class CCitadelWeaponInfo  // sizeof 0x778, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flBulletDamage; // offset 0x8, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    ECitadelDamageType m_eDamageType; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    int32 m_iBullets; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    int32 m_iSplitShotsMax; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    float32 m_flSplitShotAngles; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    bool m_bHitOnceAcrossAllBullets; // offset 0x1C, size 0x1, align 1 | MPropertyDescription
    char _pad_001D[0x3]; // offset 0x1D
    int32 m_iBulletsToFullyClaimOrb; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    float32 m_flExplosionRadius; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    float32 m_flExplosionDamageScaleAtMaxRadius; // offset 0x28, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr MPropertyAttributeRange
    bool m_bAllowExplosionToCollectGold; // offset 0x2C, size 0x1, align 1 | MPropertySuppressExpr MPropertyDescription
    char _pad_002D[0x3]; // offset 0x2D
    int32 m_iClipSize; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    float32 m_flCycleTime; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    float32 m_flBulletCreationDelay; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    int32 m_iBurstShotCount; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flIntraBurstCycleTime; // offset 0x40, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    int32 m_iAmmoConsumedPerShot; // offset 0x44, size 0x4, align 4 | MPropertyDescription
    float32 m_flRange; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    float32 m_flRangeWhileZoomed; // offset 0x4C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffStartRange; // offset 0x50, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffEndRange; // offset 0x54, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffBias; // offset 0x58, size 0x4, align 4 | MPropertyDescription MPropertyAttributeRange
    float32 m_flDamageFalloffStartScale; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flDamageFalloffEndScale; // offset 0x60, size 0x4, align 4 | MPropertyDescription
    bool m_bDontPassThroughPortals; // offset 0x64, size 0x1, align 1 | MPropertyDescription
    bool m_bPlayImpactEffectsOnTeammates; // offset 0x65, size 0x1, align 1 | MPropertyDescription
    char _pad_0066[0x2]; // offset 0x66
    float32 m_flPenetrationPercent; // offset 0x68, size 0x4, align 4 | MPropertyDescription
    float32 m_flIronSightsTime; // offset 0x6C, size 0x4, align 4 | MPropertyDescription
    float32 m_reloadDuration; // offset 0x70, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription MPropertyFriendlyName
    bool m_bReloadUseActiveWeaponInfoDuration; // offset 0x74, size 0x1, align 1 | MPropertyDescription
    bool m_bReloadSingleBullets; // offset 0x75, size 0x1, align 1 | MPropertyDescription
    bool m_bReloadSingleBulletsAllowCancel; // offset 0x76, size 0x1, align 1 | MPropertyDescription
    char _pad_0077[0x1]; // offset 0x77
    float32 m_flReloadSingleBulletsInitialDelay; // offset 0x78, size 0x4, align 4 | MPropertyDescription
    bool m_bCanCrit; // offset 0x7C, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_007D[0x3]; // offset 0x7D
    float32 m_flCritBonusStartRange; // offset 0x80, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusEndRange; // offset 0x84, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusStart; // offset 0x88, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusEnd; // offset 0x8C, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flCritBonusAgainstNPCs; // offset 0x90, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    CITADEL_UNIT_TARGET_TYPE m_eCritFilter; // offset 0x94, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    CITADEL_UNIT_TARGET_TYPE m_eCritAlwaysFilter; // offset 0x98, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    bool m_bSpinsUp; // offset 0x9C, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_009D[0x3]; // offset 0x9D
    float32 m_flMaxSpinCycleTime; // offset 0xA0, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flSpinIncreaseRate; // offset 0xA4, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flSpinDecayRate; // offset 0xA8, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flBuildUpRate; // offset 0xAC, size 0x4, align 4 | MPropertySuppressExpr
    bool m_bIsSemiAuto; // offset 0xB0, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_00B1[0x3]; // offset 0xB1
    float32 m_flBulletSpeed; // offset 0xB4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBulletSpeedRandomFactor; // offset 0xB8, size 0x4, align 4
    float32 m_flBulletGravityScale; // offset 0xBC, size 0x4, align 4
    float32 m_flBulletRadius; // offset 0xC0, size 0x4, align 4
    float32 m_flBulletRadiusVsWorld; // offset 0xC4, size 0x4, align 4
    float32 m_flBulletLifetime; // offset 0xC8, size 0x4, align 4
    float32 m_flVerticalAimBias; // offset 0xCC, size 0x4, align 4
    float32 m_flBulletInheritShooterVelocityScale; // offset 0xD0, size 0x4, align 4 | MPropertyDescription
    bool m_bCanZoom; // offset 0xD4, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_00D5[0x3]; // offset 0xD5
    float32 m_flZoomFOV; // offset 0xD8, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    float32 m_flZoomFOV_Relative; // offset 0xDC, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flZoomMoveSpeedPercent; // offset 0xE0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flShootMoveSpeedPercent; // offset 0xE4, size 0x4, align 4
    float32 m_flReloadMoveSpeedPercent; // offset 0xE8, size 0x4, align 4
    bool m_bUsesSpreadPattern; // offset 0xEC, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    char _pad_00ED[0x3]; // offset 0xED
    float32 m_Spread; // offset 0xF0, size 0x4, align 4 | MPropertyDescription
    bool m_bFirstShotPerfectAccuracy; // offset 0xF4, size 0x1, align 1 | MPropertyDescription
    char _pad_00F5[0x3]; // offset 0xF5
    CRangeFloat m_AimingShootSpreadPenalty; // offset 0xF8, size 0x8, align 255 | MPropertyDescription
    float32 m_flScatterYawScale; // offset 0x100, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyPerShot; // offset 0x104, size 0x4, align 4 | MPropertyDescription
    CitadelSpreadPerShotNormalization_t m_ShootSpreadPenaltyPerShotNormalization; // offset 0x108, size 0x14, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyDecayDelay; // offset 0x11C, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootSpreadPenaltyDecay; // offset 0x120, size 0x4, align 4 | MPropertyDescription
    float32 m_flSpreadPenaltyDecay; // offset 0x124, size 0x4, align 4 | MPropertyDescription
    float32 m_flShootingUpSpreadPenalty; // offset 0x128, size 0x4, align 4 | MPropertyDescription
    float32 m_flAutoReplenishClip; // offset 0x12C, size 0x4, align 4 | MPropertyDescription
    CRangeFloat m_NpcAimingSpread; // offset 0x130, size 0x8, align 255 | MPropertyDescription
    CUtlVector< Vector2D > m_vecScatterOffsets; // offset 0x138, size 0x18, align 8 | MPropertyDescription
    float32 m_flPelletScatterFactor; // offset 0x150, size 0x4, align 4 | MPropertyDescription
    float32 m_flPelletScatterSpreadFactor; // offset 0x154, size 0x4, align 4 | MPropertyDescription
    bool m_bApplySpreadToFirstPellet; // offset 0x158, size 0x1, align 1 | MPropertyDescription
    char _pad_0159[0x7]; // offset 0x159
    CUtlVector< Vector2D > m_vecOriginOffsets; // offset 0x160, size 0x18, align 8 | MPropertyDescription
    float32 m_flVerticalPunch; // offset 0x178, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flHorizontalPunch; // offset 0x17C, size 0x4, align 4 | MPropertyDescription
    CitadelWeaponRecoilData_t m_HorizontalRecoil; // offset 0x180, size 0x14, align 4
    CitadelWeaponRecoilData_t m_VerticallRecoil; // offset 0x194, size 0x14, align 4
    float32 m_flRecoilSpeed; // offset 0x1A8, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilRecoveryDelayFactor; // offset 0x1AC, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilRecoverySpeed; // offset 0x1B0, size 0x4, align 4 | MPropertyDescription
    float32 m_flRecoilShotIndexRecoveryTimeFactor; // offset 0x1B4, size 0x4, align 4 | MPropertyDescription
    int32 m_nRecoilSeed; // offset 0x1B8, size 0x4, align 4
    char _pad_01BC[0x4]; // offset 0x1BC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBulletTravelTracerParticle; // offset 0x1C0, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szSelfBulletTravelTracerParticle; // offset 0x2A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szBulletLinkParticle; // offset 0x380, size 0xE0, align 8
    bool m_bUseDesatForFriendlyNonHeroTracer; // offset 0x460, size 0x1, align 1
    char _pad_0461[0x3]; // offset 0x461
    EAttachmentSourceType m_eAttachmentSourceType; // offset 0x464, size 0x4, align 4 | MPropertyDescription
    CUtlString m_strCustomAttachmentSource; // offset 0x468, size 0x8, align 8 | MPropertySuppressExpr
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szMuzzleFlashEffectName; // offset 0x470, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_strWeaponImpactEffect; // offset 0x550, size 0xE0, align 8 | MPropertyDescription
    CUtlOrderedMap< CUtlStringToken, PerSurfaceImpactEffects_t > m_mapImpactEffects; // offset 0x630, size 0x28, align 8 | MPropertyFriendlyName MPropertyDescription
    bool m_bUseWeaponAbilityName; // offset 0x658, size 0x1, align 1 | MPropertyDescription
    char _pad_0659[0x3]; // offset 0x659
    float32 m_flDamageForce; // offset 0x65C, size 0x4, align 4 | MPropertyDescription
    CSoundEventName m_strShootSound; // offset 0x660, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFirstShotSound; // offset 0x670, size 0x10, align 8
    CSoundEventName m_strShotReleaseSound; // offset 0x680, size 0x10, align 8
    CSoundEventName m_strBulletLoopingSound; // offset 0x690, size 0x10, align 8
    CSoundEventName m_strBulletWhizSound; // offset 0x6A0, size 0x10, align 8
    CSoundEventName m_strBulletImpactSound; // offset 0x6B0, size 0x10, align 8
    float32 m_flBulletWhizDistance; // offset 0x6C0, size 0x4, align 4
    char _pad_06C4[0x4]; // offset 0x6C4
    CSoundEventName m_strReloadSound; // offset 0x6C8, size 0x10, align 8
    CSoundEventName m_strReloadEndSound; // offset 0x6D8, size 0x10, align 8
    CSoundEventName m_strLocalPlayerBulletImpactSound; // offset 0x6E8, size 0x10, align 8
    CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // offset 0x6F8, size 0x10, align 8
    CSoundEventName m_strZoomInSound; // offset 0x708, size 0x10, align 8
    CSoundEventName m_strZoomOutSound; // offset 0x718, size 0x10, align 8
    CSoundEventName m_strSpinUpSound; // offset 0x728, size 0x10, align 8
    CSoundEventName m_strSpinDownSound; // offset 0x738, size 0x10, align 8
    CSoundEventName m_strSpinUpLoopSound; // offset 0x748, size 0x10, align 8
    char _pad_0758[0x1C]; // offset 0x758
    float32 m_flMaxLagCompensation; // offset 0x774, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
};
