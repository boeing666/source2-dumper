#pragma once

class CCitadel_Modifier_LightningStrikeAreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticle; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticleFriendly; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticleFriendly; // offset 0xA00, size 0xE0, align 8
    float32 m_flHeight; // offset 0xAE0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0AE4[0x4]; // offset 0xAE4
};
