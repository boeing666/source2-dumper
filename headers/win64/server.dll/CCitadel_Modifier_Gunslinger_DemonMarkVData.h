#pragma once

class CCitadel_Modifier_Gunslinger_DemonMarkVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x880, size 0x10, align 8
    CSoundEventName m_CasterMarkTriggerSound; // offset 0x890, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VictimMarkTriggerSound; // offset 0x8A0, size 0x10, align 8
};
