#pragma once

class CCSWeaponBaseVData : public CBasePlayerWeaponVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x520]; // offset 0x0
    CSWeaponType m_WeaponType; // offset 0x520, size 0x4, align 4
    CSWeaponCategory m_WeaponCategory; // offset 0x524, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCNmSkeleton > > m_szAnimSkeleton; // offset 0x528, size 0xE0, align 8 | MPropertyStartGroup
    Vector m_vecMuzzlePos0; // offset 0x608, size 0xC, align 4
    Vector m_vecMuzzlePos1; // offset 0x614, size 0xC, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_szTracerParticle; // offset 0x620, size 0xE0, align 8 | MPropertyDescription
    gear_slot_t m_GearSlot; // offset 0x700, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    int32 m_GearSlotPosition; // offset 0x704, size 0x4, align 4
    loadout_slot_t m_DefaultLoadoutSlot; // offset 0x708, size 0x4, align 4 | MPropertyFriendlyName MPropertyDescription
    int32 m_nPrice; // offset 0x70C, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nKillAward; // offset 0x710, size 0x4, align 4
    int32 m_nPrimaryReserveAmmoMax; // offset 0x714, size 0x4, align 4
    int32 m_nSecondaryReserveAmmoMax; // offset 0x718, size 0x4, align 4
    bool m_bMeleeWeapon; // offset 0x71C, size 0x1, align 1
    bool m_bHasBurstMode; // offset 0x71D, size 0x1, align 1
    bool m_bIsRevolver; // offset 0x71E, size 0x1, align 1
    bool m_bCannotShootUnderwater; // offset 0x71F, size 0x1, align 1
    CGlobalSymbol m_szName; // offset 0x720, size 0x8, align 8 | MPropertyFriendlyName
    CSWeaponSilencerType m_eSilencerType; // offset 0x728, size 0x4, align 4
    int32 m_nCrosshairMinDistance; // offset 0x72C, size 0x4, align 4
    int32 m_nCrosshairDeltaDistance; // offset 0x730, size 0x4, align 4
    bool m_bIsFullAuto; // offset 0x734, size 0x1, align 1
    char _pad_0735[0x3]; // offset 0x735
    int32 m_nNumBullets; // offset 0x738, size 0x4, align 4
    bool m_bReloadsSingleShells; // offset 0x73C, size 0x1, align 1
    char _pad_073D[0x3]; // offset 0x73D
    CFiringModeFloat m_flCycleTime; // offset 0x740, size 0x8, align 255 | MPropertyStartGroup
    float32 m_flCycleTimeWhenInBurstMode; // offset 0x748, size 0x4, align 4
    float32 m_flTimeBetweenBurstShots; // offset 0x74C, size 0x4, align 4
    CFiringModeFloat m_flMaxSpeed; // offset 0x750, size 0x8, align 255
    CFiringModeFloat m_flSpread; // offset 0x758, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyCrouch; // offset 0x760, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyStand; // offset 0x768, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyJump; // offset 0x770, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyLand; // offset 0x778, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyLadder; // offset 0x780, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyFire; // offset 0x788, size 0x8, align 255
    CFiringModeFloat m_flInaccuracyMove; // offset 0x790, size 0x8, align 255
    CFiringModeFloat m_flRecoilAngle; // offset 0x798, size 0x8, align 255
    CFiringModeFloat m_flRecoilAngleVariance; // offset 0x7A0, size 0x8, align 255
    CFiringModeFloat m_flRecoilMagnitude; // offset 0x7A8, size 0x8, align 255
    CFiringModeFloat m_flRecoilMagnitudeVariance; // offset 0x7B0, size 0x8, align 255
    CFiringModeInt m_nTracerFrequency; // offset 0x7B8, size 0x8, align 255
    float32 m_flInaccuracyJumpInitial; // offset 0x7C0, size 0x4, align 4
    float32 m_flInaccuracyJumpApex; // offset 0x7C4, size 0x4, align 4
    float32 m_flInaccuracyReload; // offset 0x7C8, size 0x4, align 4
    float32 m_flDeployDuration; // offset 0x7CC, size 0x4, align 4
    float32 m_flDisallowAttackAfterReloadStartDuration; // offset 0x7D0, size 0x4, align 4
    int32 m_nBurstShotCount; // offset 0x7D4, size 0x4, align 4
    bool m_bAllowBurstHolster; // offset 0x7D8, size 0x1, align 1
    char _pad_07D9[0x3]; // offset 0x7D9
    int32 m_nRecoilSeed; // offset 0x7DC, size 0x4, align 4 | MPropertyStartGroup
    int32 m_nSpreadSeed; // offset 0x7E0, size 0x4, align 4
    float32 m_flAttackMovespeedFactor; // offset 0x7E4, size 0x4, align 4
    float32 m_flInaccuracyPitchShift; // offset 0x7E8, size 0x4, align 4
    float32 m_flInaccuracyAltSoundThreshold; // offset 0x7EC, size 0x4, align 4
    CUtlString m_szUseRadioSubtitle; // offset 0x7F0, size 0x8, align 8
    bool m_bUnzoomsAfterShot; // offset 0x7F8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bHideViewModelWhenZoomed; // offset 0x7F9, size 0x1, align 1
    char _pad_07FA[0x2]; // offset 0x7FA
    int32 m_nZoomLevels; // offset 0x7FC, size 0x4, align 4
    int32 m_nZoomFOV1; // offset 0x800, size 0x4, align 4
    int32 m_nZoomFOV2; // offset 0x804, size 0x4, align 4
    float32 m_flZoomTime0; // offset 0x808, size 0x4, align 4
    float32 m_flZoomTime1; // offset 0x80C, size 0x4, align 4
    float32 m_flZoomTime2; // offset 0x810, size 0x4, align 4
    float32 m_flIronSightPullUpSpeed; // offset 0x814, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flIronSightPutDownSpeed; // offset 0x818, size 0x4, align 4
    float32 m_flIronSightFOV; // offset 0x81C, size 0x4, align 4
    float32 m_flIronSightPivotForward; // offset 0x820, size 0x4, align 4
    float32 m_flIronSightLooseness; // offset 0x824, size 0x4, align 4
    int32 m_nDamage; // offset 0x828, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHeadshotMultiplier; // offset 0x82C, size 0x4, align 4
    float32 m_flArmorRatio; // offset 0x830, size 0x4, align 4
    float32 m_flPenetration; // offset 0x834, size 0x4, align 4
    float32 m_flRange; // offset 0x838, size 0x4, align 4
    float32 m_flRangeModifier; // offset 0x83C, size 0x4, align 4
    float32 m_flFlinchVelocityModifierLarge; // offset 0x840, size 0x4, align 4
    float32 m_flFlinchVelocityModifierSmall; // offset 0x844, size 0x4, align 4
    float32 m_flRecoveryTimeCrouch; // offset 0x848, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRecoveryTimeStand; // offset 0x84C, size 0x4, align 4
    float32 m_flRecoveryTimeCrouchFinal; // offset 0x850, size 0x4, align 4
    float32 m_flRecoveryTimeStandFinal; // offset 0x854, size 0x4, align 4
    int32 m_nRecoveryTransitionStartBullet; // offset 0x858, size 0x4, align 4
    int32 m_nRecoveryTransitionEndBullet; // offset 0x85C, size 0x4, align 4
    float32 m_flThrowVelocity; // offset 0x860, size 0x4, align 4 | MPropertyStartGroup
    Vector m_vSmokeColor; // offset 0x864, size 0xC, align 4
    CGlobalSymbol m_szAnimClass; // offset 0x870, size 0x8, align 8
    char _pad_0878[0x30]; // offset 0x878
};
