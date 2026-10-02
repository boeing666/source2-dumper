#pragma once

class CCitadel_Ability_Boho_DoubleHitVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastLifeLeechParticle; // offset 0x14D8, size 0xE0, align 8
    CSoundEventName m_strSlashSound; // offset 0x15B8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x15C8, size 0x10, align 8
};
