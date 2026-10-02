#pragma once

class CCitadel_Modifier_PillarVData : public CCitadel_Modifier_StunnedVData /*0x0*/  // sizeof 0xB20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DebuffParticle; // offset 0x870, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStartParticle; // offset 0x950, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffEndParticle; // offset 0xA30, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_PostSleepModifier; // offset 0xB10, size 0x10, align 8 | MPropertyStartGroup
};
