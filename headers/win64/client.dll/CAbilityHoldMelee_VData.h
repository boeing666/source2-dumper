#pragma once

class CAbilityHoldMelee_VData : public CAbilityMeleeVData /*0x0*/  // sizeof 0x18B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13D0]; // offset 0x0
    CUtlOrderedMap< EMeleeHold_AttackType, AttackData_t > m_mapAttacks; // offset 0x13D0, size 0x28, align 8
    float32 m_flLightMeleeAnimChainTime; // offset 0x13F8, size 0x4, align 4
    float32 m_flMinDashTime; // offset 0x13FC, size 0x4, align 4
    bool m_bUseCasterFacing; // offset 0x1400, size 0x1, align 1
    char _pad_1401[0x3]; // offset 0x1401
    CRemapFloat m_AirMeleeUpScale; // offset 0x1404, size 0x10, align 255
    char _pad_1414[0x4]; // offset 0x1414
    CPiecewiseCurve m_HeavyTurnSpeedCurve; // offset 0x1418, size 0x40, align 8
    float32 m_flCameraMaxTurnRate; // offset 0x1458, size 0x4, align 4
    float32 m_flHeavyMeleeMaxTurnRate; // offset 0x145C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HoldBeginEffect; // offset 0x1460, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SuccessfulParryParticle; // offset 0x1540, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParryActivateParticle; // offset 0x1620, size 0xE0, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // offset 0x1700, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // offset 0x1788, size 0x88, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceMiss; // offset 0x1810, size 0x88, align 8
    CSoundEventName m_strHoldBegin; // offset 0x1898, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strSuccessfulParrySound; // offset 0x18A8, size 0x10, align 8
};
