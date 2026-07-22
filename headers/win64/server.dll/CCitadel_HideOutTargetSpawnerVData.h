#pragma once

class CCitadel_HideOutTargetSpawnerVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x200, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flThinkRate; // offset 0x28, size 0x4, align 4
    float32 m_flFirstThink; // offset 0x2C, size 0x4, align 4
    int32 m_flPigeonMaxCount; // offset 0x30, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBallMaxDist; // offset 0x34, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBallGoalThresHold; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallScored; // offset 0x40, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BallSpawned; // offset 0x120, size 0xE0, align 8
};
