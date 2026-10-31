#pragma once

class CAbilityBabaBenchMeleeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CUtlOrderedMap< EBabaBenchMeleeAttackType, BabaBenchMeleeAttack_t > m_mapAttacks; // offset 0x1080, size 0x28, align 8
    float32 m_flHeavyHoldTime; // offset 0x10A8, size 0x4, align 4
    float32 m_flMinChargeTime; // offset 0x10AC, size 0x4, align 4
    float32 m_flCollisionDistance; // offset 0x10B0, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x10B4, size 0x4, align 4
    float32 m_flDashMaxTurnRate; // offset 0x10B8, size 0x4, align 4
    char _pad_10BC[0x4]; // offset 0x10BC
    CUtlString m_strEffectsAttachName; // offset 0x10C0, size 0x8, align 8
    float32 m_flGroundPoundDiveSpeed; // offset 0x10C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGroundPoundLaunchSpeed; // offset 0x10CC, size 0x4, align 4
    float32 m_flGroundPoundChargeAirControlSpeed; // offset 0x10D0, size 0x4, align 4
    float32 m_flGroundPoundChargeAirControlAccel; // offset 0x10D4, size 0x4, align 4
    float32 m_flGroundPoundGravityScale; // offset 0x10D8, size 0x4, align 4
    char _pad_10DC[0x4]; // offset 0x10DC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x10E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundPoundImpactParticle; // offset 0x11C0, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x12A0, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x1340, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceMiss; // offset 0x13E0, size 0xA0, align 8
    CSoundEventName m_strHoldBegin; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGroundImpactSound; // offset 0x1490, size 0x10, align 8
    CSoundEventName m_strLightKickBeginSound; // offset 0x14A0, size 0x10, align 8
};
