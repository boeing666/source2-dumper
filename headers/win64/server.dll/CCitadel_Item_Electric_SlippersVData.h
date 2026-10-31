#pragma once

class CCitadel_Item_Electric_SlippersVData : public CitadelItemVData /*0x0*/  // sizeof 0x1280, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ElectricParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x1270, size 0x10, align 8 | MPropertyStartGroup
};
