#pragma once

class CCitadel_Modifier_Gunslinger_DemonMarkVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ProcEffect; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x830, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x840, size 0x10, align 8
    CSoundEventName m_CasterMarkTriggerSound; // offset 0x850, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VictimMarkTriggerSound; // offset 0x860, size 0x10, align 8
};
