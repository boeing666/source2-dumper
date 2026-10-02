#pragma once

class CAI_NPC_Ratking_RatVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x268, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flMoveSpeedMin; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    float32 m_flMoveSpeedMax; // offset 0x2C, size 0x4, align 4
    float32 m_flRayLookahead; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    float32 m_flRayDriftPenalty; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    float32 m_flSpreadDuration; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    float32 m_flDirectionStickiness; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnRate; // offset 0x40, size 0x4, align 4 | MPropertyDescription
    float32 m_flTurnSpeedFraction; // offset 0x44, size 0x4, align 4 | MPropertyDescription
    float32 m_flScurryAmplitudeMin; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    float32 m_flScurryAmplitudeMax; // offset 0x4C, size 0x4, align 4
    float32 m_flScurryPeriodMin; // offset 0x50, size 0x4, align 4 | MPropertyDescription
    float32 m_flScurryPeriodMax; // offset 0x54, size 0x4, align 4
    float32 m_flProbeDistance; // offset 0x58, size 0x4, align 4 | MPropertyDescription
    float32 m_flProbeInterval; // offset 0x5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flProbeStepUp; // offset 0x60, size 0x4, align 4 | MPropertyDescription
    float32 m_flProbeStepDown; // offset 0x64, size 0x4, align 4 | MPropertyDescription
    bool m_bDebugDraw; // offset 0x68, size 0x1, align 1
    bool m_bDebugDrawEvents; // offset 0x69, size 0x1, align 1
    char _pad_006A[0x2]; // offset 0x6A
    float32 m_flDebugEventDuration; // offset 0x6C, size 0x4, align 4
    float32 m_flModelScaleMin; // offset 0x70, size 0x4, align 4
    float32 m_flModelScaleMax; // offset 0x74, size 0x4, align 4
    CUtlVector< CUtlString > m_AnimRunSequences; // offset 0x78, size 0x18, align 8 | MPropertyStartGroup
    CUtlString m_AnimFlightSequence; // offset 0x90, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_RatModel; // offset 0x98, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatSwarmParticle; // offset 0x178, size 0xE0, align 8
    CSoundEventName m_strMovementLoopingSound; // offset 0x258, size 0x10, align 8 | MPropertyStartGroup
};
