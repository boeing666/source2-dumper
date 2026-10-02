#pragma once

class CModifierNeutralLobBookAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xB90, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_flExplodeDamage; // offset 0x7E8, size 0x4, align 4
    char _pad_07EC[0x4]; // offset 0x7EC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RadiusParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x8D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FloorBurstParticle; // offset 0x9B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwirlParticle; // offset 0xA90, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0xB70, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ExplodeDebuffModifier; // offset 0xB80, size 0x10, align 8 | MPropertyStartGroup
};
