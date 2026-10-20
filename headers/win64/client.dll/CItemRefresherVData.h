#pragma once

class CItemRefresherVData : public CitadelItemVData /*0x0*/  // sizeof 0x1260, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_RefreshParticle; // offset 0x1180, size 0xE0, align 8 | MPropertyGroupName
};
