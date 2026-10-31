#pragma once

class CCitadel_Ability_ViperVenomVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_BuildUpModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_VenomModifier; // offset 0x1090, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastVenomParticle; // offset 0x10A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VenomExplodeParticle; // offset 0x1180, size 0xE0, align 8
    CSoundEventName m_strVenomWeakExplode; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strVenomExplode; // offset 0x1270, size 0x10, align 8
    CSoundEventName m_strVenomStrongExplode; // offset 0x1280, size 0x10, align 8
};
