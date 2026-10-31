#pragma once

class CCitadel_Modifier_RatKing_RatArmorVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xC50, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_strKnockoffArmorSound; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBlockedDamageSound; // offset 0x7A8, size 0x10, align 8
    CSoundEventName m_strAttackerHitSound; // offset 0x7B8, size 0x10, align 8
    CSoundEventName m_strHitProcSound; // offset 0x7C8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AttackerHitFx; // offset 0x8B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x998, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_KnockoffParticle; // offset 0xA78, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RatShieldStartParticle; // offset 0xB58, size 0xE0, align 8
    CUtlVector< RatArmorPiece_t > m_vecArmorPieces; // offset 0xC38, size 0x18, align 8
};
