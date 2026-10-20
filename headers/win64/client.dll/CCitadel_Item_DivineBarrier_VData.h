#pragma once

class CCitadel_Item_DivineBarrier_VData : public CitadelItemVData /*0x0*/  // sizeof 0x1280, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DivineBarrierModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1190, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strPurgeSound; // offset 0x1270, size 0x10, align 8 | MPropertyStartGroup
};
