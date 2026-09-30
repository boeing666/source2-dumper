#pragma once

class CAbilityDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStaminaDrainedSound; // offset 0x1650, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // offset 0x1660, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // offset 0x16E8, size 0x88, align 8
    float32 m_flMaxAngDiff; // offset 0x1770, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlideCancelBlockerWindow; // offset 0x1774, size 0x4, align 4
    float32 m_flSlideLockoutTime; // offset 0x1778, size 0x4, align 4
    float32 m_flGroundDashAirbornDrag; // offset 0x177C, size 0x4, align 4
    float32 m_flGroundDashAirbornSpeedClamp; // offset 0x1780, size 0x4, align 4
    char _pad_1784[0x4]; // offset 0x1784
    CSoundEventName m_strGroundDashSound; // offset 0x1788, size 0x10, align 8
    float32 m_flAirDashEndVelocityScale; // offset 0x1798, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashAccPct; // offset 0x179C, size 0x4, align 4
    float32 m_flDuringDrag; // offset 0x17A0, size 0x4, align 4
    float32 m_flAirSpeedForMaxDrag; // offset 0x17A4, size 0x4, align 4
    float32 m_flAirSpeedForMinDrag; // offset 0x17A8, size 0x4, align 4
    float32 m_flPostMaxDrag; // offset 0x17AC, size 0x4, align 4
    float32 m_flPostDragDuration; // offset 0x17B0, size 0x4, align 4
    float32 m_flDownwardAirDashSpeed; // offset 0x17B4, size 0x4, align 4
    float32 m_flParryCancelSpeedScale; // offset 0x17B8, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideDuration; // offset 0x17BC, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideFrictionPercent; // offset 0x17C0, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGlideDuration; // offset 0x17C4, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGravityScale; // offset 0x17C8, size 0x4, align 4 | MPropertyDescription
    char _pad_17CC[0x4]; // offset 0x17CC
    CSoundEventName m_strAirDashSound; // offset 0x17D0, size 0x10, align 8
};
