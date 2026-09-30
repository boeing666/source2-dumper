#pragma once

class CCitadel_Item_DivineBarrier_VData : public CitadelItemVData /*0x0*/  // sizeof 0x15B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14B0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DivineBarrierModifier; // offset 0x14B0, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x14C0, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strPurgeSound; // offset 0x15A0, size 0x10, align 8 | MPropertyStartGroup
};
