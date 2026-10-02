#pragma once

class CModifierIcePathVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xC20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_FrontModel; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BodyModel; // offset 0x870, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloatingParticle; // offset 0xA30, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IcePathBuffParticle; // offset 0xB10, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeModifier; // offset 0xBF0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_FriendlyAuraModifier; // offset 0xC00, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BonusSpiritLingerModifier; // offset 0xC10, size 0x10, align 8
};
