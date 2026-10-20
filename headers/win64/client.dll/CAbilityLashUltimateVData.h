#pragma once

class CAbilityLashUltimateVData : public CBaseLockonAbilityVData /*0x0*/  // sizeof 0x1558, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1180, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // offset 0x1260, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // offset 0x1340, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // offset 0x1420, size 0xE0, align 8
    CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // offset 0x1500, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GrabSound; // offset 0x1510, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_MissSound; // offset 0x1520, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x1530, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1540, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x1544, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1548, size 0x4, align 4
    float32 m_flMaxPitchRangeScale; // offset 0x154C, size 0x4, align 4
    float32 m_flThrowAnimTossPoint; // offset 0x1550, size 0x4, align 4
    char _pad_1554[0x4]; // offset 0x1554
};
