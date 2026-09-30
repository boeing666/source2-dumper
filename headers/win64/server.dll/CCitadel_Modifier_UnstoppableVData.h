#pragma once

class CCitadel_Modifier_UnstoppableVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShieldParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PlayerShieldParticle; // offset 0x840, size 0xE0, align 8 | MPropertyGroupName
};
