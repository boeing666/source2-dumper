#pragma once

class CCitadel_Modifier_BigBoltVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_AuraModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flModelScale; // offset 0x888, size 0x4, align 4
    char _pad_088C[0x4]; // offset 0x88C
};
