#pragma once

class CCitadel_Modifier_ItemWalkBackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB60, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IdleParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RunningParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectPositive; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BiasEffectNegative; // offset 0xA38, size 0xE0, align 8
    CSoundEventName m_WalkingLoopSound; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_IdlingLoopSound; // offset 0xB28, size 0x10, align 8
    float32 m_flStopDistance; // offset 0xB38, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMoveSpeed; // offset 0xB3C, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0xB40, size 0x4, align 4
    float32 m_flTolerance; // offset 0xB44, size 0x4, align 4
    float32 m_flRepathTime; // offset 0xB48, size 0x4, align 4
    float32 m_flPathHeightPenaltyScale; // offset 0xB4C, size 0x4, align 4
    float32 m_flWaitTimeLimit; // offset 0xB50, size 0x4, align 4
    float32 m_flWaitTimeLimitOverheld; // offset 0xB54, size 0x4, align 4
    float32 m_flCheckPlayerRate; // offset 0xB58, size 0x4, align 4
    char _pad_0B5C[0x4]; // offset 0xB5C
};
