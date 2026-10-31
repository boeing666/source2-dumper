#pragma once

class CItem_RestorativeLocket_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1380, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x1270, size 0xE0, align 8
    CSoundEventName m_strStackSound; // offset 0x1350, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMaxStackSound; // offset 0x1360, size 0x10, align 8
    CSoundEventName m_strTargetHealSound; // offset 0x1370, size 0x10, align 8
};
