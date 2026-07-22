#pragma once

class CCitadel_Modifier_ShivDashVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashEchoParticle; // offset 0x830, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DashTrailParticle; // offset 0x910, size 0xE0, align 8
};
