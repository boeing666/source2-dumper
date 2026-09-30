#pragma once

class CCitadelModifierAerialAssaultVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x950, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_FireRateModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x850, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x930, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flAirDrag; // offset 0x940, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flAirSpeed; // offset 0x944, size 0x4, align 4
    float32 m_flFallSpeed; // offset 0x948, size 0x4, align 4
    char _pad_094C[0x4]; // offset 0x94C
};
