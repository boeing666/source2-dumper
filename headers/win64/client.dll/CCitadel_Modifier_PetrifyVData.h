#pragma once

class CCitadel_Modifier_PetrifyVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xAE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x830]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x830, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStartParticle; // offset 0x910, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndParticle; // offset 0x9F0, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // offset 0xAD0, size 0x10, align 8 | MPropertyStartGroup
};
