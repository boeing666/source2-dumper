#pragma once

class CAbilityDashVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1C40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DownDashParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallJumpParticle; // offset 0x19D8, size 0xE0, align 8
    CSoundEventName m_strArriveSound; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStaminaDrainedSound; // offset 0x1AC8, size 0x10, align 8
    CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // offset 0x1AD8, size 0x88, align 8 | MPropertyStartGroup
    CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // offset 0x1B60, size 0x88, align 8
    float32 m_flMaxAngDiff; // offset 0x1BE8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flSlideCancelBlockerWindow; // offset 0x1BEC, size 0x4, align 4
    float32 m_flSlideLockoutTime; // offset 0x1BF0, size 0x4, align 4
    float32 m_flGroundDashAirbornDrag; // offset 0x1BF4, size 0x4, align 4
    float32 m_flGroundDashAirbornSpeedClamp; // offset 0x1BF8, size 0x4, align 4
    char _pad_1BFC[0x4]; // offset 0x1BFC
    CSoundEventName m_strGroundDashSound; // offset 0x1C00, size 0x10, align 8
    float32 m_flAirDashEndVelocityScale; // offset 0x1C10, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirDashAccPct; // offset 0x1C14, size 0x4, align 4
    float32 m_flDuringDrag; // offset 0x1C18, size 0x4, align 4
    float32 m_flAirSpeedForMaxDrag; // offset 0x1C1C, size 0x4, align 4
    float32 m_flAirSpeedForMinDrag; // offset 0x1C20, size 0x4, align 4
    float32 m_flPostMaxDrag; // offset 0x1C24, size 0x4, align 4
    float32 m_flPostDragDuration; // offset 0x1C28, size 0x4, align 4
    float32 m_flDownwardAirDashSpeed; // offset 0x1C2C, size 0x4, align 4
    CSoundEventName m_strAirDashSound; // offset 0x1C30, size 0x10, align 8
};
