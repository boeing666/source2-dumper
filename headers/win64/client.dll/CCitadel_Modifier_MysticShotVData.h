#pragma once

class CCitadel_Modifier_MysticShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8C8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x8C8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0x9A8, size 0x10, align 8 | MPropertyStartGroup
};
