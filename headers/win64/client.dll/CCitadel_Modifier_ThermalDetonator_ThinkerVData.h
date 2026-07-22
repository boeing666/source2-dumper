#pragma once

class CCitadel_Modifier_ThermalDetonator_ThinkerVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x968, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7A8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticleFriendly; // offset 0x888, size 0xE0, align 8
};
