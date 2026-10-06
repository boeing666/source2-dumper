#pragma once

class CAbilityBabaBenchMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1818, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CUtlOrderedMap< EBabaBenchMeleeAttackType, BabaBenchMeleeAttack_t > m_mapAttacks; // offset 0x13E8, size 0x28, align 8
    float32 m_flHeavyHoldTime; // offset 0x1410, size 0x4, align 4
    float32 m_flMinChargeTime; // offset 0x1414, size 0x4, align 4
    float32 m_flCollisionDistance; // offset 0x1418, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x141C, size 0x4, align 4
    float32 m_flDashMaxTurnRate; // offset 0x1420, size 0x4, align 4
    char _pad_1424[0x4]; // offset 0x1424
    CUtlString m_strEffectsAttachName; // offset 0x1428, size 0x8, align 8
    float32 m_flGroundPoundDiveSpeed; // offset 0x1430, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGroundPoundLaunchSpeed; // offset 0x1434, size 0x4, align 4
    float32 m_flGroundPoundChargeAirControlSpeed; // offset 0x1438, size 0x4, align 4
    float32 m_flGroundPoundChargeAirControlAccel; // offset 0x143C, size 0x4, align 4
    float32 m_flGroundPoundGravityScale; // offset 0x1440, size 0x4, align 4
    char _pad_1444[0x4]; // offset 0x1444
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x1448, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundPoundImpactParticle; // offset 0x1528, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x1608, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x16A8, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceMiss; // offset 0x1748, size 0xA0, align 8
    CSoundEventName m_strHoldBegin; // offset 0x17E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGroundImpactSound; // offset 0x17F8, size 0x10, align 8
    CSoundEventName m_strLightKickBeginSound; // offset 0x1808, size 0x10, align 8
};
