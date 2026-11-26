#pragma once

class CAbilityLashUltimateVData : public CBaseLockonAbilityVData /*0x0*/  // sizeof 0x1570, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10B8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x10B8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1198, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // offset 0x1278, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // offset 0x1358, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // offset 0x1438, size 0xE0, align 8
    CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // offset 0x1518, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GrabSound; // offset 0x1528, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_MissSound; // offset 0x1538, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x1548, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1558, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x155C, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1560, size 0x4, align 4
    float32 m_flMaxPitchRangeScale; // offset 0x1564, size 0x4, align 4
    float32 m_flThrowAnimTossPoint; // offset 0x1568, size 0x4, align 4
    char _pad_156C[0x4]; // offset 0x156C
};
