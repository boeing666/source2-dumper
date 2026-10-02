#pragma once

class CCitadel_Modifier_LuminousStrikeBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CSoundEventName m_strBuffReceivedSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strMaxBuffReceivedSound; // offset 0x7A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BuffParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_IncomingParticle; // offset 0x890, size 0xE0, align 8
    int32 m_nStackCountForMaxParticle; // offset 0x970, size 0x4, align 4
    char _pad_0974[0x4]; // offset 0x974
};
