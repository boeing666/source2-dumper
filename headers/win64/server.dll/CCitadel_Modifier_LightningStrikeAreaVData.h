#pragma once

class CCitadel_Modifier_LightningStrikeAreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_GroundParticleFriendly; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_StrikeParticleFriendly; // offset 0xA38, size 0xE0, align 8
    float32 m_flHeight; // offset 0xB18, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0B1C[0x4]; // offset 0xB1C
};
