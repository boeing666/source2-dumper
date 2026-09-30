#pragma once

class CCitadel_Item_Electric_SlippersVData : public CitadelItemVData /*0x0*/  // sizeof 0x15A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x1590, size 0x10, align 8 | MPropertyStartGroup
};
