#pragma once

class CNPC_TrooperNeutralVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    ENeutralTrooperType m_eTrooperType; // offset 0x1348, size 0x4, align 4
    float32 m_flGoldReward; // offset 0x134C, size 0x4, align 4
    float32 m_flGoldRewardBonusPercentPerMinute; // offset 0x1350, size 0x4, align 4
    bool m_bCapSimultanousAttackers; // offset 0x1354, size 0x1, align 1
    char _pad_1355[0x3]; // offset 0x1355
    float32 m_flShieldReactivateDelay; // offset 0x1358, size 0x4, align 4
    float32 m_flDyingDuration; // offset 0x135C, size 0x4, align 4
    bool m_bDamagedByBullets; // offset 0x1360, size 0x1, align 1 | MPropertyStartGroup MPropertyFriendlyName
    bool m_bDamagedByMelee; // offset 0x1361, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bDamagedByAbilities; // offset 0x1362, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1363[0x5]; // offset 0x1363
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x1368, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_retaliateParticle; // offset 0x1448, size 0xE0, align 8 | MPropertyDescription
    bool m_bHasAOEAttack; // offset 0x1528, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1529[0x3]; // offset 0x1529
    float32 m_flAOERadius; // offset 0x152C, size 0x4, align 4
    float32 m_flAOEDamage; // offset 0x1530, size 0x4, align 4
    float32 m_flAOEAttackCooldown; // offset 0x1534, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AOEParticle; // offset 0x1538, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AOEDebuffToApply; // offset 0x1618, size 0x10, align 8
    CSoundEventName m_AOEInitiateSound; // offset 0x1628, size 0x10, align 8
    CSoundEventName m_AOESound; // offset 0x1638, size 0x10, align 8
    float32 m_AOEDebuffDuration; // offset 0x1648, size 0x4, align 4
    char _pad_164C[0x4]; // offset 0x164C
    CUtlVector< CUtlString > m_vecRandomBodyGroup; // offset 0x1650, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< CUtlString > m_vecRandomSkin; // offset 0x1668, size 0x18, align 8
    float32 m_flHullCapsuleRadius; // offset 0x1680, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flHullCapsuleHeight; // offset 0x1684, size 0x4, align 4
    bool m_bFaceEnemyWhileIdle; // offset 0x1688, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1689[0x7]; // offset 0x1689
    CSoundEventName m_IdleLoopSound; // offset 0x1690, size 0x10, align 8
    MoveType_t m_MoveType; // offset 0x16A0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_16A1[0x3]; // offset 0x16A1
    int32 m_iWeakPointCount; // offset 0x16A4, size 0x4, align 4 | MPropertyStartGroup
    ENeutralWeakPointType m_iWeakPointType; // offset 0x16A8, size 0x1, align 1
    char _pad_16A9[0x3]; // offset 0x16A9
    float32 m_iWeakPointRespawnTime; // offset 0x16AC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_NeutralDamageGrowth; // offset 0x16B0, size 0x10, align 8
};
