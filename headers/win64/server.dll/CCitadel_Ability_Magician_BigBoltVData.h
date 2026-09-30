#pragma once

class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // offset 0x1480, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1560, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // offset 0x1570, size 0x10, align 8
    CSoundEventName m_strBoltDelay; // offset 0x1580, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBoltFire; // offset 0x1590, size 0x10, align 8
};
