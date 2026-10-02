#pragma once

class CAbilityDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1858, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x15A8, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStaminaDrainedSound; // offset 0x1698, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // offset 0x16A8, size 0xA0, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // offset 0x1748, size 0xA0, align 8
    float32 m_flMaxAngDiff; // offset 0x17E8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlideCancelBlockerWindow; // offset 0x17EC, size 0x4, align 4
    float32 m_flSlideLockoutTime; // offset 0x17F0, size 0x4, align 4
    float32 m_flGroundDashAirbornDrag; // offset 0x17F4, size 0x4, align 4
    float32 m_flGroundDashAirbornSpeedClamp; // offset 0x17F8, size 0x4, align 4
    char _pad_17FC[0x4]; // offset 0x17FC
    CSoundEventName m_strGroundDashSound; // offset 0x1800, size 0x10, align 8
    float32 m_flAirDashEndVelocityScale; // offset 0x1810, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashAccPct; // offset 0x1814, size 0x4, align 4
    float32 m_flDuringDrag; // offset 0x1818, size 0x4, align 4
    float32 m_flAirSpeedForMaxDrag; // offset 0x181C, size 0x4, align 4
    float32 m_flAirSpeedForMinDrag; // offset 0x1820, size 0x4, align 4
    float32 m_flPostMaxDrag; // offset 0x1824, size 0x4, align 4
    float32 m_flPostDragDuration; // offset 0x1828, size 0x4, align 4
    float32 m_flDownwardAirDashSpeed; // offset 0x182C, size 0x4, align 4
    float32 m_flParryCancelSpeedScale; // offset 0x1830, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideDuration; // offset 0x1834, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelSlideFrictionPercent; // offset 0x1838, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGlideDuration; // offset 0x183C, size 0x4, align 4 | MPropertyDescription
    float32 m_flParryCancelAirGravityScale; // offset 0x1840, size 0x4, align 4 | MPropertyDescription
    char _pad_1844[0x4]; // offset 0x1844
    CSoundEventName m_strAirDashSound; // offset 0x1848, size 0x10, align 8
};
