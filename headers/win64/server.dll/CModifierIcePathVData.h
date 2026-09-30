#pragma once

class CModifierIcePathVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // offset 0xA00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // offset 0xAE0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0xBC0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_FriendlyAuraModifier; // offset 0xBD0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // offset 0xBE0, size 0x10, align 8
};
