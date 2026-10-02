#pragma once

class CAbilityBullChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // offset 0x13E8, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // offset 0x1488, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // offset 0x1498, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // offset 0x14A8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // offset 0x14B8, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x14C8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x14D8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallSlamSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitEnemySound; // offset 0x15C8, size 0x10, align 8
    float32 m_flWallStunLookAheadDist; // offset 0x15D8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndChargeVelocityScale; // offset 0x15DC, size 0x4, align 4
};
