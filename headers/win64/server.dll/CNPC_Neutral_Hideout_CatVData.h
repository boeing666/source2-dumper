#pragma once

class CNPC_Neutral_Hideout_CatVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x428, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flCollisionRadius; // offset 0x28, size 0x4, align 4
    float32 m_flTraceRadius; // offset 0x2C, size 0x4, align 4
    float32 m_flTraceDistancePerIteration; // offset 0x30, size 0x4, align 4
    int32 m_iMaxTraceIterations; // offset 0x34, size 0x4, align 4
    float32 m_flStepUpHeight; // offset 0x38, size 0x4, align 4
    float32 m_flParticleRadius; // offset 0x3C, size 0x4, align 4
    CRangeFloat m_flLifeTime; // offset 0x40, size 0x8, align 255
    CRangeInt m_iHitsToDisappear; // offset 0x48, size 0x8, align 255
    float32 m_flRespawnTime; // offset 0x50, size 0x4, align 4
    CRangeFloat m_flModelScale; // offset 0x54, size 0x8, align 255
    float32 m_flWalkSpeed; // offset 0x5C, size 0x4, align 4
    float32 m_flRunSpeed; // offset 0x60, size 0x4, align 4
    CRangeFloat m_flRunDistanceMax; // offset 0x64, size 0x8, align 255
    float32 m_flDropDownRate; // offset 0x6C, size 0x4, align 4
    float32 m_flDistTolerance; // offset 0x70, size 0x4, align 4
    float32 m_flValidDirectionDist; // offset 0x74, size 0x4, align 4
    CRangeFloat m_flMoveAwayTime; // offset 0x78, size 0x8, align 255
    float32 m_flChaseDistanceStart; // offset 0x80, size 0x4, align 4
    float32 m_flChaseDistanceEnd; // offset 0x84, size 0x4, align 4
    float32 m_flChaseDistTolerance; // offset 0x88, size 0x4, align 4
    float32 m_flChaseAtTarget; // offset 0x8C, size 0x4, align 4
    float32 m_flBallSpeedMin; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_hModel; // offset 0x98, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SpawnParticle; // offset 0x178, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x258, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x338, size 0xE0, align 8
    CSoundEventName m_strDestroySound; // offset 0x418, size 0x10, align 8 | MPropertyStartGroup
};
