#pragma once

class CCitadel_Modifier_BarrierTrackerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WeaponImpactParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TechImpactParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldBreakParticle; // offset 0x920, size 0xE0, align 8
    CSoundEventName m_ShieldBreakSound; // offset 0xA00, size 0x10, align 8 | MPropertyGroupName
    CSoundEventName m_strShieldRefreshSound; // offset 0xA10, size 0x10, align 8
    float32 m_flShieldImpactEffectDuration; // offset 0xA20, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0A24[0x4]; // offset 0xA24
};
