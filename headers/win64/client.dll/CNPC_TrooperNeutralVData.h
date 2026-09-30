#pragma once

class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xEF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    ENeutralNPCType m_eNeutralType; // offset 0xC30, size 0x4, align 4
    float32 m_flGoldReward; // offset 0xC34, size 0x4, align 4
    float32 m_flGoldRewardBonusPercentPerMinute; // offset 0xC38, size 0x4, align 4
    int32 m_iMaxSquadAttackers; // offset 0xC3C, size 0x4, align 4
    float32 m_flShieldReactivateDelay; // offset 0xC40, size 0x4, align 4
    float32 m_flDyingDuration; // offset 0xC44, size 0x4, align 4
    float32 m_flReturnToSpawnSpeed; // offset 0xC48, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSpawnTetherRadius; // offset 0xC4C, size 0x4, align 4
    float32 m_flAbilityChance01; // offset 0xC50, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAbilityChance02; // offset 0xC54, size 0x4, align 4
    float32 m_flAbilityChance03; // offset 0xC58, size 0x4, align 4
    float32 m_flMinTimeBetweenAbilities; // offset 0xC5C, size 0x4, align 4
    CSubclassName< 2 > m_sNeutralMelee; // offset 0xC60, size 0x10, align 8
    CUtlVector< CSubclassName< 2 > > m_vNeutralAbilities; // offset 0xC70, size 0x18, align 8
    bool m_bDamagedByBullets; // offset 0xC88, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDamagedByMelee; // offset 0xC89, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDamagedByAbilities; // offset 0xC8A, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bNoMelee; // offset 0xC8B, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    bool m_bOnlyMelee; // offset 0xC8C, size 0x1, align 1 | MPropertyFriendlyName MPropertyDescription
    char _pad_0C8D[0x3]; // offset 0xC8D
    float32 m_flAttackRangeTarget; // offset 0xC90, size 0x4, align 4
    float32 m_flStrafeAngleAmount; // offset 0xC94, size 0x4, align 4
    float32 m_flStrafeSideDuration; // offset 0xC98, size 0x4, align 4
    float32 m_flNonMoveAttackDuration; // offset 0xC9C, size 0x4, align 4
    float32 m_flRNGTickRate; // offset 0xCA0, size 0x4, align 4
    float32 m_flWakeUpTime; // offset 0xCA4, size 0x4, align 4
    bool m_bUseSleepPoseWhenNoTarget; // offset 0xCA8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0CA9[0x7]; // offset 0xCA9
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0xCB0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // offset 0xD90, size 0xE0, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecRandomBodyGroup; // offset 0xE70, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< CUtlString > m_vecRandomSkin; // offset 0xE88, size 0x18, align 8
    CSoundEventName m_SpawnSound; // offset 0xEA0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_NeutralDamageGrowth; // offset 0xEB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SleepModifier; // offset 0xEC0, size 0x10, align 8
    CUtlHashtable< int32, CUtlString > m_mapViewerSoulsClass; // offset 0xED0, size 0x20, align 8 | MPropertyStartGroup
};
