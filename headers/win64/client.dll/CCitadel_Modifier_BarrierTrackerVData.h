#pragma once

class CCitadel_Modifier_BarrierTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponImpactParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechImpactParticle; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldBreakParticle; // offset 0x950, size 0xE0, align 8
    CSoundEventName m_ShieldBreakSound; // offset 0xA30, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strShieldRefreshSound; // offset 0xA40, size 0x10, align 8
    float32 m_flShieldImpactEffectDuration; // offset 0xA50, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0A54[0x4]; // offset 0xA54
};
