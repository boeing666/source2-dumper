#pragma once

class CCitadel_Modifier_AcolytesGlove_VData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x998, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7C8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x7C8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SwingParticle; // offset 0x7D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x8B8, size 0xE0, align 8
};
