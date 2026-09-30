#pragma once

class CCitadel_Modifier_LuminousStrikeBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CSoundEventName m_strBuffReceivedSound; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMaxBuffReceivedSound; // offset 0x770, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x780, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IncomingParticle; // offset 0x860, size 0xE0, align 8
    int32 m_nStackCountForMaxParticle; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
