#pragma once

class CCitadel_Modifier_PillarVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xB28, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x878, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStartParticle; // offset 0x958, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndParticle; // offset 0xA38, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // offset 0xB18, size 0x10, align 8 | MPropertyStartGroup
};
