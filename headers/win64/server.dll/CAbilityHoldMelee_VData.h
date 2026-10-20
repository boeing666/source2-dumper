#pragma once

class CAbilityHoldMelee_VData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x15D0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // offset 0x10A0, size 0x28, align 8
    float32 m_flLightMeleeAnimChainTime; // offset 0x10C8, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x10CC, size 0x4, align 4
    bool m_bUseCasterFacing; // offset 0x10D0, size 0x1, align 1
    char _pad_10D1[0x3]; // offset 0x10D1
    CRemapFloat m_AirMeleeUpScale; // offset 0x10D4, size 0x10, align 255
    char _pad_10E4[0x4]; // offset 0x10E4
    CPiecewiseCurve m_HeavyTurnSpeedCurve; // offset 0x10E8, size 0x40, align 8
    float32 m_flCameraMaxTurnRate; // offset 0x1128, size 0x4, align 4
    float32 m_flHeavyMeleeMaxTurnRate; // offset 0x112C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x1130, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x1210, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // offset 0x12F0, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x13D0, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x1470, size 0xA0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceMiss; // offset 0x1510, size 0xA0, align 8
    CSoundEventName m_strHoldBegin; // offset 0x15B0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strSuccessfulParrySound; // offset 0x15C0, size 0x10, align 8
};
