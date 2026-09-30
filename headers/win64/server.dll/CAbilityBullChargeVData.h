#pragma once

class CAbilityBullChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1580, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // offset 0x13A0, size 0x88, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // offset 0x1428, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // offset 0x1438, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // offset 0x1448, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // offset 0x1458, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1468, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1478, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallSlamSound; // offset 0x1558, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitEnemySound; // offset 0x1568, size 0x10, align 8
    float32 m_flWallStunLookAheadDist; // offset 0x1578, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndChargeVelocityScale; // offset 0x157C, size 0x4, align 4
};
