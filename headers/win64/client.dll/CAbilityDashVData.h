#pragma once

class CAbilityDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x14F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // offset 0x1160, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x1240, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1320, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStaminaDrainedSound; // offset 0x1330, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // offset 0x1340, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // offset 0x13E0, size 0xA0, align 8
    float32 m_flMaxAngDiff; // offset 0x1480, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlideCancelBlockerWindow; // offset 0x1484, size 0x4, align 4
    float32 m_flSlideLockoutTime; // offset 0x1488, size 0x4, align 4
    float32 m_flGroundDashAirbornDrag; // offset 0x148C, size 0x4, align 4
    float32 m_flGroundDashAirbornSpeedClamp; // offset 0x1490, size 0x4, align 4
    char _pad_1494[0x4]; // offset 0x1494
    CSoundEventName m_strGroundDashSound; // offset 0x1498, size 0x10, align 8
    float32 m_flAirDashEndVelocityScale; // offset 0x14A8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashAccPct; // offset 0x14AC, size 0x4, align 4
    float32 m_flDuringDrag; // offset 0x14B0, size 0x4, align 4
    float32 m_flAirSpeedForMaxDrag; // offset 0x14B4, size 0x4, align 4
    float32 m_flAirSpeedForMinDrag; // offset 0x14B8, size 0x4, align 4
    float32 m_flPostMaxDrag; // offset 0x14BC, size 0x4, align 4
    float32 m_flPostDragDuration; // offset 0x14C0, size 0x4, align 4
    float32 m_flDownwardAirDashSpeed; // offset 0x14C4, size 0x4, align 4
    float32 m_flParryCancelSpeedScale; // offset 0x14C8, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideDuration; // offset 0x14CC, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideFrictionPercent; // offset 0x14D0, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGlideDuration; // offset 0x14D4, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGravityScale; // offset 0x14D8, size 0x4, align 4 | MPropertyDescription
    char _pad_14DC[0x4]; // offset 0x14DC
    CSoundEventName m_strAirDashSound; // offset 0x14E0, size 0x10, align 8
};
