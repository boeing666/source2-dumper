#pragma once

class CItemStimPakVData : public CitadelItemVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StimPakModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyGroupName
};
