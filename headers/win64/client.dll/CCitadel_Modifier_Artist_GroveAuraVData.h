#pragma once

class CCitadel_Modifier_Artist_GroveAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_EnemyGroundParticle; // offset 0x7E8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_FriendlyGroundParticle; // offset 0x8C8, size 0xE0, align 8
};
