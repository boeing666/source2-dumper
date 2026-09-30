#pragma once

class CModifierStormCloudVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapFriendly; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawFriendly; // offset 0x840, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEFriendly; // offset 0x920, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ZapEnemy; // offset 0xA00, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DrawEnemy; // offset 0xAE0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEEnemy; // offset 0xBC0, size 0xE0, align 8
    CSoundEventName m_strChannelEndingSoonSound; // offset 0xCA0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strChannelFinishedSound; // offset 0xCB0, size 0x10, align 8
    CSoundEventName m_strDamageRecievedSound; // offset 0xCC0, size 0x10, align 8
    CSoundEventName m_strAmbientZapSound; // offset 0xCD0, size 0x10, align 8
};
