#pragma once

class CModifierIcePathVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // offset 0x9F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // offset 0xAD0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifierAura > m_FriendlyAuraModifier; // offset 0xBB0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // offset 0xBC0, size 0x10, align 8
};
