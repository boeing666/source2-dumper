#pragma once

class CCitadel_Modifier_Artist_GroveAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x9B0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGroundParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyGroundParticle; // offset 0x8D0, size 0xE0, align 8
};
