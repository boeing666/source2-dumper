#pragma once

class CCitadel_Modifier_TeleportToObjectiveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportOriginParticle; // offset 0x750, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TeleportDestinationParticle; // offset 0x830, size 0xE0, align 8
    CSoundEventName m_TeleportStartSound; // offset 0x910, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_TeleportCompleteSound; // offset 0x920, size 0x10, align 8
    CSoundEventName m_TeleportArriveSound; // offset 0x930, size 0x10, align 8
};
