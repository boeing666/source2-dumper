#pragma once

class CCitadel_Modifier_MedicBulletsVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8D0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x8D0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ProcSound; // offset 0x9B0, size 0x10, align 8 | MPropertyStartGroup
};
