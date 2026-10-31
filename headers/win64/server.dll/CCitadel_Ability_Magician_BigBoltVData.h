#pragma once

class CCitadel_Ability_Magician_BigBoltVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1280, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootDelayParticle; // offset 0x1160, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_CasterModifier; // offset 0x1240, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BoltHitModifier; // offset 0x1250, size 0x10, align 8
    CSoundEventName m_strBoltDelay; // offset 0x1260, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBoltFire; // offset 0x1270, size 0x10, align 8
};
