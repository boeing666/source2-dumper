#pragma once

class CCitadel_Modifier_MysticShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x880, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x960, size 0x10, align 8 | MPropertyStartGroup
};
