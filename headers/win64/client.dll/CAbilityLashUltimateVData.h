#pragma once

class CAbilityLashUltimateVData : public CBaseLockonAbilityVData /*0x0*/  // sizeof 0x1CF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1838]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetPreviewParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaunchParticle; // offset 0x1918, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastParticle; // offset 0x19F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_UltimateCastEnemyParticle; // offset 0x1AD8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AllyIndicatorParticle; // offset 0x1BB8, size 0xE0, align 8
    CGlobalSymbol m_strThrowEnemyAnimGraphParam; // offset 0x1C98, size 0x8, align 8 | MPropertyStartGroup MPropertyLeafSuggestionProviderFn
    CEmbeddedSubclass< CCitadel_Modifier_LashGrappleEnemy_Debuff > m_GrappleEnemyModifier; // offset 0x1CA0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GrabSound; // offset 0x1CB0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_MissSound; // offset 0x1CC0, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x1CD0, size 0x10, align 8
    float32 m_flAirSpeedMax; // offset 0x1CE0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flFallSpeedMax; // offset 0x1CE4, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1CE8, size 0x4, align 4
    float32 m_flMaxPitchRangeScale; // offset 0x1CEC, size 0x4, align 4
    float32 m_flThrowAnimTossPoint; // offset 0x1CF0, size 0x4, align 4
    char _pad_1CF4[0x4]; // offset 0x1CF4
};
