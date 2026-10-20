#pragma once

class CAbilityBullChargeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1268, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // offset 0x1070, size 0xA0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierTossAirControlLockout; // offset 0x1110, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_ModifierWeaponPowerIncrease; // offset 0x1120, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierChargeDragEnemy; // offset 0x1130, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_ModifierBullCharging; // offset 0x1140, size 0x10, align 8
    CEmbeddedSubclass< CBaseModifier > m_SlowModifier; // offset 0x1150, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1160, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strWallSlamSound; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitEnemySound; // offset 0x1250, size 0x10, align 8
    float32 m_flWallStunLookAheadDist; // offset 0x1260, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flEndChargeVelocityScale; // offset 0x1264, size 0x4, align 4
};
