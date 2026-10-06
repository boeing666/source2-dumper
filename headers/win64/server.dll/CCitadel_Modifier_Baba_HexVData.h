#pragma once

class CCitadel_Modifier_Baba_HexVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    ModelChange_t m_CursedModel; // offset 0x790, size 0xE8, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HexedParticle; // offset 0x958, size 0xE0, align 8 | MPropertyDescription
    CitadelCameraOperationsSequence_t m_cameraSequenceHexed; // offset 0xA38, size 0xA0, align 8 | MPropertyStartGroup MPropertyDescription
    float32 m_flModelScale; // offset 0xAD8, size 0x4, align 4 | MPropertyStartGroup
    bool m_bInterruptsChannels; // offset 0xADC, size 0x1, align 1
    bool m_bCanFly; // offset 0xADD, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0ADE[0x2]; // offset 0xADE
    float32 m_flFlyAcceleration; // offset 0xAE0, size 0x4, align 4
    float32 m_flFlyDeceleration; // offset 0xAE4, size 0x4, align 4
    float32 m_flFlySpeedScale; // offset 0xAE8, size 0x4, align 4
    float32 m_flFlyIdleSinkSpeed; // offset 0xAEC, size 0x4, align 4
    float32 m_flLaunchUpSpeed; // offset 0xAF0, size 0x4, align 4
    float32 m_flFlyLaunchTime; // offset 0xAF4, size 0x4, align 4
    float32 m_flFlyHoverMinHeight; // offset 0xAF8, size 0x4, align 4
    float32 m_flFlyHoverMaxHeight; // offset 0xAFC, size 0x4, align 4
    float32 m_flFlyHoverMinImpulseFlat; // offset 0xB00, size 0x4, align 4
    float32 m_flFlyHoverMinImpulseScaling; // offset 0xB04, size 0x4, align 4
    float32 m_flFlyHoverMaxScale; // offset 0xB08, size 0x4, align 4
    float32 m_flFlySinkSpeedMax; // offset 0xB0C, size 0x4, align 4
    float32 m_flFlyAirDrag; // offset 0xB10, size 0x4, align 4
    float32 m_flFlyJumpImpulseUp; // offset 0xB14, size 0x4, align 4
    float32 m_flFlyJumpImpulseHoriz; // offset 0xB18, size 0x4, align 4
    float32 m_flFlyTimeBetweenJumps; // offset 0xB1C, size 0x4, align 4
    float32 m_flFlyTimeBetweenImpulse; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x4]; // offset 0xB24
};
