#pragma once

class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectPositive; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectNegative; // offset 0xA00, size 0xE0, align 8
    CSoundEventName m_WalkingLoopSound; // offset 0xAE0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_IdlingLoopSound; // offset 0xAF0, size 0x10, align 8
    float32 m_flStopDistance; // offset 0xB00, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMoveSpeed; // offset 0xB04, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0xB08, size 0x4, align 4
    float32 m_flTolerance; // offset 0xB0C, size 0x4, align 4
    float32 m_flRepathTime; // offset 0xB10, size 0x4, align 4
    float32 m_flWaitTimeLimit; // offset 0xB14, size 0x4, align 4
    float32 m_flWaitTimeLimitOverheld; // offset 0xB18, size 0x4, align 4
    float32 m_flCheckPlayerRate; // offset 0xB1C, size 0x4, align 4
};
