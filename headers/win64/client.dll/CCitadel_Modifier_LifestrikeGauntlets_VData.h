#pragma once

class CCitadel_Modifier_LifestrikeGauntlets_VData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x860, size 0xE0, align 8
};
