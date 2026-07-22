#pragma once

class CCitadel_Ability_Boho_DoubleHitVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastLifeLeechParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_strSlashSound; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x19F8, size 0x10, align 8
};
