#pragma once

class CCitadel_Ability_Trapper_WebWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x13B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallParticle; // offset 0x13C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallDestroyedParticle; // offset 0x14A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallHitParticle; // offset 0x1580, size 0xE0, align 8
    CSoundEventName m_strWebWallCreated; // offset 0x1660, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWebWallDestroyed; // offset 0x1670, size 0x10, align 8
};
