#pragma once

class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectPositive; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectNegative; // offset 0x9F0, size 0xE0, align 8
    CSoundEventName m_WalkingLoopSound; // offset 0xAD0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_IdlingLoopSound; // offset 0xAE0, size 0x10, align 8
    float32 m_flStopDistance; // offset 0xAF0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMoveSpeed; // offset 0xAF4, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0xAF8, size 0x4, align 4
    float32 m_flTolerance; // offset 0xAFC, size 0x4, align 4
    float32 m_flRepathTime; // offset 0xB00, size 0x4, align 4
    float32 m_flWaitTimeLimit; // offset 0xB04, size 0x4, align 4
    float32 m_flWaitTimeLimitOverheld; // offset 0xB08, size 0x4, align 4
    float32 m_flCheckPlayerRate; // offset 0xB0C, size 0x4, align 4
};
