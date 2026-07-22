#pragma once

class CCitadel_Ability_VampireBat_StealLifeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B00, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastLifeLeechParticle; // offset 0x1908, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // offset 0x19E8, size 0xE0, align 8
    CSoundEventName m_strSlashSound; // offset 0x1AC8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1AD8, size 0x10, align 8
    CSoundEventName m_strKillConfirmSound; // offset 0x1AE8, size 0x10, align 8
    bool m_bAllowFloating; // offset 0x1AF8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1AF9[0x7]; // offset 0x1AF9
};
