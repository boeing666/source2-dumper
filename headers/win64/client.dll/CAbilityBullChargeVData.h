#pragma once

class CAbilityBullChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // offset 0x1818, size 0x88, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // offset 0x18A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // offset 0x18B0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // offset 0x18C0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // offset 0x18D0, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x18E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x18F0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallSlamSound; // offset 0x19D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitEnemySound; // offset 0x19E0, size 0x10, align 8
    float32 m_flWallStunLookAheadDist; // offset 0x19F0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndChargeVelocityScale; // offset 0x19F4, size 0x4, align 4
};
