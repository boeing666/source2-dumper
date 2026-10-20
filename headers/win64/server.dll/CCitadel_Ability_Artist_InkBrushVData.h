#pragma once

class CCitadel_Ability_Artist_InkBrushVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13F8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PaintingParticle; // offset 0x1150, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1230, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x1310, size 0x10, align 8 | MPropertyStartGroup
    bool m_bEndOnRelease; // offset 0x1320, size 0x1, align 1 | MPropertyStartGroup
    bool m_bRMBDraw; // offset 0x1321, size 0x1, align 1
    char _pad_1322[0x2]; // offset 0x1322
    float32 m_flTimeBetweenConsumingMarker; // offset 0x1324, size 0x4, align 4
    float32 m_flTraceForwardDistance; // offset 0x1328, size 0x4, align 4
    float32 m_flTraceDownDistance; // offset 0x132C, size 0x4, align 4
    float32 m_flDragRadius; // offset 0x1330, size 0x4, align 4
    float32 m_flDragSpringStrength; // offset 0x1334, size 0x4, align 4
    float32 m_flDragDampingStrength; // offset 0x1338, size 0x4, align 4
    float32 m_flDragMaxSpeed; // offset 0x133C, size 0x4, align 4
    float32 m_flDragMaxSpeedWhilePainting; // offset 0x1340, size 0x4, align 4
    int32 m_iMinimumMarkers; // offset 0x1344, size 0x4, align 4
    float32 m_flLoopPercentCheck; // offset 0x1348, size 0x4, align 4
    float32 m_flDistanceThresholdForLoop; // offset 0x134C, size 0x4, align 4
    float32 m_flLoopRadiusMultiplier; // offset 0x1350, size 0x4, align 4
    char _pad_1354[0x4]; // offset 0x1354
    CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // offset 0x1358, size 0xA0, align 8 | MPropertyStartGroup
};
