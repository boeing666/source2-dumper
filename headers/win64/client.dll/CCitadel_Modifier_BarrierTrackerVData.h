#pragma once

class CCitadel_Modifier_BarrierTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponImpactParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechImpactParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldBreakParticle; // offset 0x910, size 0xE0, align 8
    CSoundEventName m_ShieldBreakSound; // offset 0x9F0, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strShieldRefreshSound; // offset 0xA00, size 0x10, align 8
    float32 m_flShieldImpactEffectDuration; // offset 0xA10, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0A14[0x4]; // offset 0xA14
};
