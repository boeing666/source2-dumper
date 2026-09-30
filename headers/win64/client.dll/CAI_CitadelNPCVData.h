#pragma once

class CAI_CitadelNPCVData : public CAI_BaseNPCVData /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // offset 0x2D8, size 0x28, align 8
    bool m_bSpawnOnGround; // offset 0x300, size 0x1, align 1
    char _pad_0301[0x3]; // offset 0x301
    float32 m_flSightRangePlayers; // offset 0x304, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSightRangeNPCs; // offset 0x308, size 0x4, align 4
    char _pad_030C[0x4]; // offset 0x30C
    CGlobalSymbol m_MeleeAnimName; // offset 0x310, size 0x8, align 8
    float32 m_flMeleeAttemptRange; // offset 0x318, size 0x4, align 4
    float32 m_flMeleeHitRange; // offset 0x31C, size 0x4, align 4
    float32 m_flWalkSpeed; // offset 0x320, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRunSpeed; // offset 0x324, size 0x4, align 4
    float32 m_flStrafeSpeed; // offset 0x328, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x32C, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x330, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x334, size 0x4, align 4
    float32 m_flJumpAnticipationTime; // offset 0x338, size 0x4, align 4
    float32 m_flJumpUpBaseCostSeconds; // offset 0x33C, size 0x4, align 4
    NPCFlightMotion_t m_FlightMotion; // offset 0x340, size 0x18, align 4
    float32 m_flSquadDistance; // offset 0x358, size 0x4, align 4
    char _pad_035C[0x4]; // offset 0x35C
    CGlobalSymbol m_sAnimGraphIdentifier; // offset 0x360, size 0x8, align 8 | MPropertyStartGroup
    CUtlVector< NPCMovementBlockedClip_t > m_MovementBlockedClips; // offset 0x368, size 0x18, align 8
    CUtlVector< NPCHitReactClip_t > m_HitReactClips; // offset 0x380, size 0x18, align 8
    CSoundEventName m_BeamStartSound; // offset 0x398, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x3A8, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x3B8, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x3C8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x3D8, size 0x10, align 8
    CSoundEventName m_strAmbientLoopSound; // offset 0x3E8, size 0x10, align 8
    CSoundEventName m_DeathSound; // offset 0x3F8, size 0x10, align 8
    CSoundEventName m_strLastHitSound; // offset 0x408, size 0x10, align 8
    float32 m_flLastHitSoundWindowTime; // offset 0x418, size 0x4, align 4
    char _pad_041C[0x4]; // offset 0x41C
    CSoundEventName m_MeleeHitSound; // offset 0x420, size 0x10, align 8
    CSoundEventName m_strMeleeAttackSound; // offset 0x430, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sAmberModelName; // offset 0x440, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sSapphireModelName; // offset 0x520, size 0xE0, align 8 | MPropertyDescription
    bool m_bUseTeamRelativeMaterialGroups; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x7]; // offset 0x601
    CModelMaterialGroupName m_sDefaultMaterialGroupName; // offset 0x608, size 0x8, align 8
    CModelMaterialGroupName m_sEnemyMaterialGroupName; // offset 0x610, size 0x8, align 8
    CModelMaterialGroupName m_sTeam1MaterialGroupName; // offset 0x618, size 0x8, align 8 | MPropertyFriendlyName
    CModelMaterialGroupName m_sTeam2MaterialGroupName; // offset 0x620, size 0x8, align 8 | MPropertyFriendlyName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x628, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // offset 0x708, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x8D0, size 0xE0, align 8
    float32 m_flOutlineRange; // offset 0x9B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOutlineWidth; // offset 0x9B4, size 0x4, align 4
    bool m_bOutlineThroughWalls; // offset 0x9B8, size 0x1, align 1 | MPropertyDescription
    bool m_bOutlineWhenVisible; // offset 0x9B9, size 0x1, align 1 | MPropertyDescription
    bool m_bSuppressOtherOutlinesWhenVisible; // offset 0x9BA, size 0x1, align 1 | MPropertyDescription
    char _pad_09BB[0x1]; // offset 0x9BB
    float32 m_flMaxHealthBarDrawDistance; // offset 0x9BC, size 0x4, align 4 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // offset 0x9C0, size 0xE0, align 8
    CUtlString m_sLocUnitName; // offset 0xAA0, size 0x8, align 8
    CUtlString m_sHealthBarAttachment; // offset 0xAA8, size 0x8, align 8
    Color m_HealthBarColorFriend; // offset 0xAB0, size 0x4, align 4
    Color m_HealthBarColorEnemy; // offset 0xAB4, size 0x4, align 4
    Color m_HealthBarColorTeam1; // offset 0xAB8, size 0x4, align 4
    Color m_HealthBarColorTeam2; // offset 0xABC, size 0x4, align 4
    Color m_HealthBarColorTeamNeutral; // offset 0xAC0, size 0x4, align 4
    char _pad_0AC4[0x4]; // offset 0xAC4
    CPanoramaImageName m_strCustomUnitIcon; // offset 0xAC8, size 0x10, align 8 | MPropertyDescription
    bool m_bTrackOutOfCombatStatus; // offset 0xAD8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0AD9[0x7]; // offset 0xAD9
    CEmbeddedSubclass< CCitadelModifier > m_NpcOutOfCombatModifier; // offset 0xAE0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NpcInCombatModifier; // offset 0xAF0, size 0x10, align 8
    float32 m_flMeleeTargetRadius; // offset 0xB00, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    bool m_bSpawnBreakablesOnDeath; // offset 0xB04, size 0x1, align 1 | MPropertyDescription
    char _pad_0B05[0x3]; // offset 0xB05
    float32 m_flBreakableForceScale; // offset 0xB08, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPhysicsImpulseMultiplier; // offset 0xB0C, size 0x4, align 4 | MPropertyDescription
    float32 m_flBeamWeaponWidth; // offset 0xB10, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBeamTurnRate; // offset 0xB14, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // offset 0xB18, size 0xE0, align 8
    CUtlOrderedMap< CGlobalSymbol, CCitadelWeaponInfo > m_mapWeaponInfos; // offset 0xBF8, size 0x28, align 8 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    bool m_bDamageBreakableWithMelee; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x3]; // offset 0xC21
    int32 m_nSquadPriority; // offset 0xC24, size 0x4, align 4
    char _pad_0C28[0x8]; // offset 0xC28
};
