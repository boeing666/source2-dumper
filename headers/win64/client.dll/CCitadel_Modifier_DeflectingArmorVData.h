#pragma once

class CCitadel_Modifier_DeflectingArmorVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcDeflectionImpactSound; // offset 0x850, size 0x10, align 8
};
