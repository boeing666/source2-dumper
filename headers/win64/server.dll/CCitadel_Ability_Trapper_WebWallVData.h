#pragma once

class CCitadel_Ability_Trapper_WebWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1350, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1080, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallDestroyedParticle; // offset 0x1170, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallHitParticle; // offset 0x1250, size 0xE0, align 8
    CSoundEventName m_strWebWallCreated; // offset 0x1330, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWebWallDestroyed; // offset 0x1340, size 0x10, align 8
};
