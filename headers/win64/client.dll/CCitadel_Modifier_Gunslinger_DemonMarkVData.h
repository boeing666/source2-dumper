#pragma once

class CCitadel_Modifier_Gunslinger_DemonMarkVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x880, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x840, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x850, size 0x10, align 8
    CSoundEventName m_CasterMarkTriggerSound; // offset 0x860, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VictimMarkTriggerSound; // offset 0x870, size 0x10, align 8
};
