#pragma once

class CCitadel_Modifier_BigBoltVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x770, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flModelScale; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
};
