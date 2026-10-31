#pragma once

class CModifierIcePathVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // offset 0xA38, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // offset 0xB18, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0xBF8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_FriendlyAuraModifier; // offset 0xC08, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // offset 0xC18, size 0x10, align 8
};
