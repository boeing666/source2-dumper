#pragma once

class CCitadel_Modifier_BerserkerDamageStackVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStatusParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffStatusParticleEnemy; // offset 0x830, size 0xE0, align 8
    CSoundEventName m_strBerserkerStackSound; // offset 0x910, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMaxStackLayer; // offset 0x920, size 0x10, align 8
};
