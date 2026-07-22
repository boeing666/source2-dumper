#pragma once

class CAI_CitadelNPCVData : public CAI_BaseNPCVData /*0x0*/  // sizeof 0x1348, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MPropertySuppressBaseClassField MPropertySuppressBaseClassField MPropertySuppressBaseClassField MPropertySuppressBaseClassField MPropertySuppressBaseClassField MPropertySuppressBaseClassField}
{
public:
    char _pad_0000[0x330]; // offset 0x0
    CUtlOrderedMap< EAbilitySlots_t, CSubclassName< 4 > > m_mapBoundAbilities; // offset 0x330, size 0x28, align 8
    float32 m_flSightRangePlayers; // offset 0x358, size 0x4, align 4
    float32 m_flSightRangeNPCs; // offset 0x35C, size 0x4, align 4
    CGlobalSymbol m_MeleeAnimName; // offset 0x360, size 0x8, align 8
    float32 m_flMeleeAttemptRange; // offset 0x368, size 0x4, align 4
    float32 m_flMeleeHitRange; // offset 0x36C, size 0x4, align 4
    CUtlVector< float32 > m_MeleeAttackPoints; // offset 0x370, size 0x18, align 8
    float32 m_flMaxHealthBarDrawDistance; // offset 0x388, size 0x4, align 4
    float32 m_flWalkSpeed; // offset 0x38C, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRunSpeed; // offset 0x390, size 0x4, align 4
    float32 m_flTurnRate; // offset 0x394, size 0x4, align 4
    float32 m_flAcceleration; // offset 0x398, size 0x4, align 4
    float32 m_flStepHeight; // offset 0x39C, size 0x4, align 4
    float32 m_flJumpAnticipationTime; // offset 0x3A0, size 0x4, align 4
    char _pad_03A4[0x4]; // offset 0x3A4
    CSoundEventName m_BeamStartSound; // offset 0x3A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_BeamStopSound; // offset 0x3B8, size 0x10, align 8
    CSoundEventName m_BeamPointStartLoopSound; // offset 0x3C8, size 0x10, align 8
    CSoundEventName m_BeamPointEndLoopSound; // offset 0x3D8, size 0x10, align 8
    CSoundEventName m_BeamPointClosestLoopSound; // offset 0x3E8, size 0x10, align 8
    CSoundEventName m_strAmbientLoopSound; // offset 0x3F8, size 0x10, align 8
    CSoundEventName m_DeathSound; // offset 0x408, size 0x10, align 8
    CSoundEventName m_strLastHitSound; // offset 0x418, size 0x10, align 8
    bool m_bPlayLastHitSound; // offset 0x428, size 0x1, align 1
    char _pad_0429[0x3]; // offset 0x429
    float32 m_flLastHitSoundWindowTime; // offset 0x42C, size 0x4, align 4
    CSoundEventName m_MeleeHitSound; // offset 0x430, size 0x10, align 8
    CSoundEventName m_MeleeHitPlayerSound; // offset 0x440, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sAmberModelName; // offset 0x450, size 0xE0, align 8 | MPropertyStartGroup MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sSapphireModelName; // offset 0x530, size 0xE0, align 8 | MPropertyDescription
    CModelMaterialGroupName m_sDefaultMaterialGroupName; // offset 0x610, size 0x8, align 8
    CModelMaterialGroupName m_sEnemyMaterialGroupName; // offset 0x618, size 0x8, align 8
    CModelMaterialGroupName m_sTeam1MaterialGroupName; // offset 0x620, size 0x8, align 8
    CModelMaterialGroupName m_sTeam2MaterialGroupName; // offset 0x628, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x630, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeActivateParticle; // offset 0x710, size 0xE0, align 8
    float32 m_flModelScale; // offset 0x7F0, size 0x4, align 4
    char _pad_07F4[0x4]; // offset 0x7F4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DeathParticle; // offset 0x7F8, size 0xE0, align 8 | MPropertyDescription
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_JumpParticle; // offset 0x8D8, size 0xE0, align 8
    float32 m_flOutlineRange; // offset 0x9B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flOutlineWidth; // offset 0x9BC, size 0x4, align 4
    bool m_bOutlineThroughWalls; // offset 0x9C0, size 0x1, align 1 | MPropertyDescription
    bool m_bOutlineWhenVisible; // offset 0x9C1, size 0x1, align 1 | MPropertyDescription
    bool m_bSuppressOtherOutlinesWhenVisible; // offset 0x9C2, size 0x1, align 1 | MPropertyDescription
    char _pad_09C3[0x5]; // offset 0x9C3
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealthBarParticle; // offset 0x9C8, size 0xE0, align 8 | MPropertyStartGroup
    CUtlString m_sHealthBarAttachment; // offset 0xAA8, size 0x8, align 8
    Color m_HealthBarColorFriend; // offset 0xAB0, size 0x4, align 1
    Color m_HealthBarColorEnemy; // offset 0xAB4, size 0x4, align 1
    Color m_HealthBarColorTeam1; // offset 0xAB8, size 0x4, align 1
    Color m_HealthBarColorTeam2; // offset 0xABC, size 0x4, align 1
    Color m_HealthBarColorTeamNeutral; // offset 0xAC0, size 0x4, align 1
    float32 m_flMeleeTargetRadius; // offset 0xAC4, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flHealthBarOffset; // offset 0xAC8, size 0x4, align 4
    bool m_bSpawnBreakablesOnDeath; // offset 0xACC, size 0x1, align 1 | MPropertyDescription
    char _pad_0ACD[0x3]; // offset 0xACD
    float32 m_flBreakableForceScale; // offset 0xAD0, size 0x4, align 4 | MPropertySuppressExpr
    float32 m_flPhysicsImpulseMultiplier; // offset 0xAD4, size 0x4, align 4 | MPropertyDescription
    float32 m_flBeamWeaponWidth; // offset 0xAD8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBeamTurnRate; // offset 0xADC, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamWeaponParticle; // offset 0xAE0, size 0xE0, align 8
    CPanoramaImageName m_strCustomUnitIcon; // offset 0xBC0, size 0x10, align 8 | MPropertyDescription
    CCitadelWeaponInfo m_WeaponInfo; // offset 0xBD0, size 0x778, align 8
};
