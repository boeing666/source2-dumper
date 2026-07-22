#pragma once

class CAbilityHoldMelee_VData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x1CA8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1848]; // offset 0x0
    CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // offset 0x1848, size 0x28, align 8
    float32 m_flLightMeleeAnimChainTime; // offset 0x1870, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x1874, size 0x4, align 4
    bool m_bUseCasterFacing; // offset 0x1878, size 0x1, align 1
    char _pad_1879[0x3]; // offset 0x1879
    CRemapFloat m_AirMeleeUpScale; // offset 0x187C, size 0x10, align 255
    char _pad_188C[0x4]; // offset 0x188C
    CPiecewiseCurve m_HeavyTurnSpeedCurve; // offset 0x1890, size 0x40, align 8
    float32 m_flCameraMaxTurnRate; // offset 0x18D0, size 0x4, align 4
    float32 m_flHeavyMeleeMaxTurnRate; // offset 0x18D4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x18D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x19B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // offset 0x1A98, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x1B78, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x1C00, size 0x88, align 8
    CSoundEventName m_strHoldBegin; // offset 0x1C88, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strSuccessfulParrySound; // offset 0x1C98, size 0x10, align 8
};
