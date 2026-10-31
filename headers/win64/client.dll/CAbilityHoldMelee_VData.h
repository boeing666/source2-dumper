#pragma once

class CAbilityHoldMelee_VData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x15E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // offset 0x10B0, size 0x28, align 8
    float32 m_flLightMeleeAnimChainTime; // offset 0x10D8, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x10DC, size 0x4, align 4
    bool m_bUseCasterFacing; // offset 0x10E0, size 0x1, align 1
    char _pad_10E1[0x3]; // offset 0x10E1
    CRemapFloat m_AirMeleeUpScale; // offset 0x10E4, size 0x10, align 255
    char _pad_10F4[0x4]; // offset 0x10F4
    CPiecewiseCurve m_HeavyTurnSpeedCurve; // offset 0x10F8, size 0x40, align 8
    float32 m_flCameraMaxTurnRate; // offset 0x1138, size 0x4, align 4
    float32 m_flHeavyMeleeMaxTurnRate; // offset 0x113C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x1140, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x1220, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // offset 0x1300, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x13E0, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x1480, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceMiss; // offset 0x1520, size 0xA0, align 8
    CSoundEventName m_strHoldBegin; // offset 0x15C0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strSuccessfulParrySound; // offset 0x15D0, size 0x10, align 8
};
