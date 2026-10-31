#pragma once

class CCitadel_Modifier_NullificationAuraAOE_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PurgeCastParticle; // offset 0x7A8, size 0xE0, align 8
    CSoundEventName m_PurgeSound; // offset 0x888, size 0x10, align 8
};
