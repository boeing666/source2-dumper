#pragma once

class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xF10, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    ENeutralNPCType m_eNeutralType; // offset 0xC50, size 0x4, align 4
    float32 m_flGoldReward; // offset 0xC54, size 0x4, align 4
    float32 m_flGoldRewardBonusPercentPerMinute; // offset 0xC58, size 0x4, align 4
    int32 m_iMaxSquadAttackers; // offset 0xC5C, size 0x4, align 4
    float32 m_flShieldReactivateDelay; // offset 0xC60, size 0x4, align 4
    float32 m_flDyingDuration; // offset 0xC64, size 0x4, align 4
    float32 m_flReturnToSpawnSpeed; // offset 0xC68, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpawnTetherRadius; // offset 0xC6C, size 0x4, align 4
    float32 m_flAbilityChance01; // offset 0xC70, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAbilityChance02; // offset 0xC74, size 0x4, align 4
    float32 m_flAbilityChance03; // offset 0xC78, size 0x4, align 4
    float32 m_flMinTimeBetweenAbilities; // offset 0xC7C, size 0x4, align 4
    CSubclassName< 2 > m_sNeutralMelee; // offset 0xC80, size 0x10, align 8
    CUtlVector< CSubclassName< 2 > > m_vNeutralAbilities; // offset 0xC90, size 0x18, align 8
    bool m_bDamagedByBullets; // offset 0xCA8, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDamagedByMelee; // offset 0xCA9, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDamagedByAbilities; // offset 0xCAA, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNoMelee; // offset 0xCAB, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bOnlyMelee; // offset 0xCAC, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0CAD[0x3]; // offset 0xCAD
    float32 m_flAttackRangeTarget; // offset 0xCB0, size 0x4, align 4
    float32 m_flStrafeAngleAmount; // offset 0xCB4, size 0x4, align 4
    float32 m_flStrafeSideDuration; // offset 0xCB8, size 0x4, align 4
    float32 m_flNonMoveAttackDuration; // offset 0xCBC, size 0x4, align 4
    float32 m_flRNGTickRate; // offset 0xCC0, size 0x4, align 4
    float32 m_flWakeUpTime; // offset 0xCC4, size 0x4, align 4
    bool m_bUseSleepPoseWhenNoTarget; // offset 0xCC8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0CC9[0x7]; // offset 0xCC9
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0xCD0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // offset 0xDB0, size 0xE0, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecRandomBodyGroup; // offset 0xE90, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< CUtlString > m_vecRandomSkin; // offset 0xEA8, size 0x18, align 8
    CSoundEventName m_SpawnSound; // offset 0xEC0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_NeutralDamageGrowth; // offset 0xED0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // offset 0xEE0, size 0x10, align 8
    CUtlHashtable< int32, CUtlString > m_mapViewerSoulsClass; // offset 0xEF0, size 0x20, align 8 | MPropertyStartGroup
};
