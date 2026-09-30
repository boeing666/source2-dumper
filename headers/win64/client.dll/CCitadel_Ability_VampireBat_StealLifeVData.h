#pragma once

class CCitadel_Ability_VampireBat_StealLifeVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastLifeLeechParticle; // offset 0x1490, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageTargetParticle; // offset 0x1570, size 0xE0, align 8
    CSoundEventName m_strSlashSound; // offset 0x1650, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1660, size 0x10, align 8
    CSoundEventName m_strKillConfirmSound; // offset 0x1670, size 0x10, align 8
    CSoundEventName m_strFloatStartSound; // offset 0x1680, size 0x10, align 8
    CSoundEventName m_strFloatLoopSound; // offset 0x1690, size 0x10, align 8
    CSoundEventName m_strFloatEndSound; // offset 0x16A0, size 0x10, align 8
    bool m_bAllowFloating; // offset 0x16B0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_16B1[0x7]; // offset 0x16B1
};
