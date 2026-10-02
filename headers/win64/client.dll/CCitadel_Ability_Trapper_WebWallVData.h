#pragma once

class CCitadel_Ability_Trapper_WebWallVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x13F8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallDestroyedParticle; // offset 0x14E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WebWallHitParticle; // offset 0x15C8, size 0xE0, align 8
    CSoundEventName m_strWebWallCreated; // offset 0x16A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strWebWallDestroyed; // offset 0x16B8, size 0x10, align 8
};
