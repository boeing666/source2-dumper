#pragma once

class CAbilityLashUltimateVData : public CBaseLockonAbilityVData /*0x0*/  // sizeof 0x1878, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13C0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x14A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // offset 0x1580, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // offset 0x1660, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // offset 0x1740, size 0xE0, align 8
    CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // offset 0x1820, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GrabSound; // offset 0x1830, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_MissSound; // offset 0x1840, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x1850, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1860, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x1864, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1868, size 0x4, align 4
    float32 m_flMaxPitchRangeScale; // offset 0x186C, size 0x4, align 4
    float32 m_flThrowAnimTossPoint; // offset 0x1870, size 0x4, align 4
    char _pad_1874[0x4]; // offset 0x1874
};
