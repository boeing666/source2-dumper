#pragma once

class CItem_RestorativeLocket_VData : public CitadelItemVData /*0x0*/  // sizeof 0x16A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x1590, size 0xE0, align 8
    CSoundEventName m_strStackSound; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMaxStackSound; // offset 0x1680, size 0x10, align 8
    CSoundEventName m_strTargetHealSound; // offset 0x1690, size 0x10, align 8
};
