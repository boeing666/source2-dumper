#pragma once

class CModifier_SiphonBullets_VData : public CCitadel_Modifier_BaseEventProcVData /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StealWatcherModifier; // offset 0x780, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // offset 0x790, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TracerParticle; // offset 0x7A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x880, size 0xE0, align 8
    CSoundEventName m_ExplodeSound; // offset 0x960, size 0x10, align 8 | MPropertyStartGroup
};
