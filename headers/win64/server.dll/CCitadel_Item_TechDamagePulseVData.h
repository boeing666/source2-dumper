#pragma once

class CCitadel_Item_TechDamagePulseVData : public CitadelItemVData /*0x0*/  // sizeof 0x1358, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TargetParticle; // offset 0x1260, size 0xE0, align 8
    CSoundEventName m_strPulseTickSound; // offset 0x1340, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxTargets; // offset 0x1350, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1354[0x4]; // offset 0x1354
};
