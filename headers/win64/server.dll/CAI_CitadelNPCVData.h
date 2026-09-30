#pragma once

class CAI_CitadelNPCVData : public CAI_BaseNPCVData /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2F8]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // offset 0x2F8, size 0x28, align 8
    bool m_bSpawnOnGround; // offset 0x320, size 0x1, align 1
    char _pad_0321[0x3]; // offset 0x321
    float32 m_flSightRangePlayers; // offset 0x324, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSightRangeNPCs; // offset 0x328, size 0x4, align 4
    char _pad_032C[0x4]; // offset 0x32C
    CGlobalSymbol m_MeleeAnimName; // offset 0x330, size 0x8, align 8
    float32 m_flMeleeAttemptRange; // offset 0x338, size 0x4, align 4
    float32 m_flMeleeHitRange; // offset 0x33C, size 0x4, align 4
    float32 m_flWalkSpeed; // offset 0x340, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRunSpeed; // offset 0x344, size 0x4, align 4
    float32 m_flStrafeSpeed; // offset 0x348, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x34C, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x350, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x354, size 0x4, align 4
    float32 m_flJumpAnticipationTime; // offset 0x358, size 0x4, align 4
    float32 m_flJumpUpBaseCostSeconds; // offset 0x35C, size 0x4, align 4
    NPCFlightMotion_t m_FlightMotion; // offset 0x360, size 0x18, align 4
    float32 m_flSquadDistance; // offset 0x378, size 0x4, align 4
    char _pad_037C[0x4]; // offset 0x37C
    CGlobalSymbol m_sAnimGraphIdentifier; // offset 0x380, size 0x8, align 8 | MPropertyStartGroup
    CUtlVector< NPCMovementBlockedClip_t > m_MovementBlockedClips; // offset 0x388, size 0x18, align 8
    CUtlVector< NPCHitReactClip_t > m_HitReactClips; // offset 0x3A0, size 0x18, align 8
    CSoundEventName m_BeamStartSound; // offset 0x3B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x3C8, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x3D8, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x3E8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x3F8, size 0x10, align 8
    CSoundEventName m_strAmbientLoopSound; // offset 0x408, size 0x10, align 8
    CSoundEventName m_DeathSound; // offset 0x418, size 0x10, align 8
    CSoundEventName m_strLastHitSound; // offset 0x428, size 0x10, align 8
    float32 m_flLastHitSoundWindowTime; // offset 0x438, size 0x4, align 4
    char _pad_043C[0x4]; // offset 0x43C
    CSoundEventName m_MeleeHitSound; // offset 0x440, size 0x10, align 8
    CSoundEventName m_strMeleeAttackSound; // offset 0x450, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sAmberModelName; // offset 0x460, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sSapphireModelName; // offset 0x540, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseTeamRelativeMaterialGroups; // offset 0x620, size 0x1, align 1
    char _pad_0621[0x7]; // offset 0x621
    CModelMaterialGroupName m_sDefaultMaterialGroupName; // offset 0x628, size 0x8, align 8
    CModelMaterialGroupName m_sEnemyMaterialGroupName; // offset 0x630, size 0x8, align 8
    CModelMaterialGroupName m_sTeam1MaterialGroupName; // offset 0x638, size 0x8, align 8 | MPropertyFriendlyName
    CModelMaterialGroupName m_sTeam2MaterialGroupName; // offset 0x640, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x648, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // offset 0x728, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x808, size 0x4, align 4
    char _pad_080C[0x4]; // offset 0x80C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x810, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x8F0, size 0xE0, align 8
    float32 m_flOutlineRange; // offset 0x9D0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOutlineWidth; // offset 0x9D4, size 0x4, align 4
    bool m_bOutlineThroughWalls; // offset 0x9D8, size 0x1, align 1 | MPropertyDescription
    bool m_bOutlineWhenVisible; // offset 0x9D9, size 0x1, align 1 | MPropertyDescription
    bool m_bSuppressOtherOutlinesWhenVisible; // offset 0x9DA, size 0x1, align 1 | MPropertyDescription
    char _pad_09DB[0x1]; // offset 0x9DB
    float32 m_flMaxHealthBarDrawDistance; // offset 0x9DC, size 0x4, align 4 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // offset 0x9E0, size 0xE0, align 8
    CUtlString m_sLocUnitName; // offset 0xAC0, size 0x8, align 8
    CUtlString m_sHealthBarAttachment; // offset 0xAC8, size 0x8, align 8
    Color m_HealthBarColorFriend; // offset 0xAD0, size 0x4, align 4
    Color m_HealthBarColorEnemy; // offset 0xAD4, size 0x4, align 4
    Color m_HealthBarColorTeam1; // offset 0xAD8, size 0x4, align 4
    Color m_HealthBarColorTeam2; // offset 0xADC, size 0x4, align 4
    Color m_HealthBarColorTeamNeutral; // offset 0xAE0, size 0x4, align 4
    char _pad_0AE4[0x4]; // offset 0xAE4
    CPanoramaImageName m_strCustomUnitIcon; // offset 0xAE8, size 0x10, align 8 | MPropertyDescription
    bool m_bTrackOutOfCombatStatus; // offset 0xAF8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0AF9[0x7]; // offset 0xAF9
    CEmbeddedSubclass< CCitadelModifier > m_NpcOutOfCombatModifier; // offset 0xB00, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NpcInCombatModifier; // offset 0xB10, size 0x10, align 8
    float32 m_flMeleeTargetRadius; // offset 0xB20, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    bool m_bSpawnBreakablesOnDeath; // offset 0xB24, size 0x1, align 1 | MPropertyDescription
    char _pad_0B25[0x3]; // offset 0xB25
    float32 m_flBreakableForceScale; // offset 0xB28, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPhysicsImpulseMultiplier; // offset 0xB2C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBeamWeaponWidth; // offset 0xB30, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBeamTurnRate; // offset 0xB34, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // offset 0xB38, size 0xE0, align 8
    CUtlOrderedMap< CGlobalSymbol, CCitadelWeaponInfo > m_mapWeaponInfos; // offset 0xC18, size 0x28, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    bool m_bDamageBreakableWithMelee; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x3]; // offset 0xC41
    int32 m_nSquadPriority; // offset 0xC44, size 0x4, align 4
    char _pad_0C48[0x8]; // offset 0xC48
};
