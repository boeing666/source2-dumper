#pragma once

class CModifier_SiphonBullets_VData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7D0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // offset 0x7D0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // offset 0x7E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x7F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x8D0, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x9B0, size 0x10, align 8 | MPropertyStartGroup
};
