#pragma once

class CAbility_Synth_Affliction_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x19F8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1908, size 0xE0, align 8
    CSoundEventName m_strHitSound; // offset 0x19E8, size 0x10, align 8 | MPropertyStartGroup
};
