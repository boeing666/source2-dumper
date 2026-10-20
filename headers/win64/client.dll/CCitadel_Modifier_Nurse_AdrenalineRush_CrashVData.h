#pragma once

class CCitadel_Modifier_Nurse_AdrenalineRush_CrashVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartWithSpiritsSound; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strStartWithoutSpiritsSound; // offset 0x880, size 0x10, align 8
};
