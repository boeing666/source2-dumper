#pragma once

class CCitadel_Ability_Artist_InkBrushVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PaintingParticle; // offset 0x14C8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x15A8, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1688, size 0x10, align 8 | MPropertyStartGroup
    bool m_bEndOnRelease; // offset 0x1698, size 0x1, align 1 | MPropertyStartGroup
    bool m_bRMBDraw; // offset 0x1699, size 0x1, align 1
    char _pad_169A[0x2]; // offset 0x169A
    float32 m_flTimeBetweenConsumingMarker; // offset 0x169C, size 0x4, align 4
    float32 m_flTraceForwardDistance; // offset 0x16A0, size 0x4, align 4
    float32 m_flTraceDownDistance; // offset 0x16A4, size 0x4, align 4
    float32 m_flDragRadius; // offset 0x16A8, size 0x4, align 4
    float32 m_flDragSpringStrength; // offset 0x16AC, size 0x4, align 4
    float32 m_flDragDampingStrength; // offset 0x16B0, size 0x4, align 4
    float32 m_flDragMaxSpeed; // offset 0x16B4, size 0x4, align 4
    float32 m_flDragMaxSpeedWhilePainting; // offset 0x16B8, size 0x4, align 4
    int32 m_iMinimumMarkers; // offset 0x16BC, size 0x4, align 4
    float32 m_flLoopPercentCheck; // offset 0x16C0, size 0x4, align 4
    float32 m_flDistanceThresholdForLoop; // offset 0x16C4, size 0x4, align 4
    float32 m_flLoopRadiusMultiplier; // offset 0x16C8, size 0x4, align 4
    char _pad_16CC[0x4]; // offset 0x16CC
    CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // offset 0x16D0, size 0xA0, align 8 | MPropertyStartGroup
};
