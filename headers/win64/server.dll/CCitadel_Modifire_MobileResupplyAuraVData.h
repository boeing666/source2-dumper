#pragma once

class CCitadel_Modifire_MobileResupplyAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DispenserAuraParticleFriendly; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DispenserAuraParticle; // offset 0x8C8, size 0xE0, align 8
};
